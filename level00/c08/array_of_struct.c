#include <stdio.h>
int main(void){
    typedef struct s_point
{
    int x;
    int y;
} t_point;
 //now create one variable
    t_point p;
    p.x = 22;
    p.y = 13;
//now creating array of structures
    t_point ps[3];
//now filling it
    ps[0].x=1;
    ps[0].y =2;

    ps[1].x = 3;
    ps[1].y = 4;

    ps[2].x = 5;
    ps[2].y = 6;



    
    return(0);
}
// the memory of ps[3] will look like this
/* index 0
 +---------+
 | x | y   |
  +---------+

 index 1
+---------+
| x | y   |
+---------+

index 2
+---------+
| x | y   |
+---------+ */