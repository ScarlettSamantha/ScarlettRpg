//
// Created by scarlett on 26-12-17.
//

#include "Input.h"

#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <sys/select.h>
#include <termios.h>

struct termios orig_termios;

void Input::reset_terminal_mode()
{
    tcsetattr(0, TCSANOW, &orig_termios);
}

void Input::set_conio_terminal_mode()
{
    struct termios new_termios{};

    /* take two copies - one for now, one for later */
    tcgetattr(0, &orig_termios);
    memcpy(&new_termios, &orig_termios, sizeof(new_termios));

    /* register cleanup handler, and set the new terminal mode */
    atexit(Input::reset_terminal_mode);
    new_termios.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP
                            |INLCR|IGNCR|IXON);
    new_termios.c_oflag &= ~OPOST;
    new_termios.c_lflag &= ~(ECHO|ECHONL|ICANON|ISIG|IEXTEN|B300);
    new_termios.c_cflag &= ~(CSIZE|PARENB);
    new_termios.c_cflag |= CS8;
    tcsetattr(0, TCSANOW, &new_termios);
}

int Input::kbhit()
{
    struct timeval tv = { 0L, 0L };
    fd_set fds{};
    FD_ZERO(&fds);
    FD_SET(0, &fds);
    return select(1, &fds, nullptr, nullptr, &tv);
}

int Input::getch()
{
    uint r;
    unsigned char c;
    if ((r = static_cast<uint>(read(0, &c, sizeof(c)))) < 0) {
        return r;
    } else {
        return c;
    }
}
