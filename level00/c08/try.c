#include <unistd.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    struct point p;

    p.x = 5;
    p.y = 9;
    write(1, &p.x, 1);   // note: this writes it as a raw byte, not "5" as text!
    return (0);
}