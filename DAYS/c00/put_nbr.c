#include <unistd.h>


void    ft_putchar(char c)
{
    write(1,&c,1);
}
void    ft_putnbr(int nb)
{
    int MIN = -2147483648; //we made this exception cuz the positive of this number is +1 greater than the max of integer can hold

    if (nb == MIN){
        write(1,"-2",2);
        ft_putnbr(147483648);
    }
    else if(nb < 0){
        write(1,"-",1);
        ft_putnbr(-nb); //salib f salib = mojab
    }
    else if (nb > 9){ //nb has more than 1 digit
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else{
        ft_putchar(nb+'0'); //works when nb has 1 digit
    }
}
int main(){
    ft_putnbr(-25);
    return 0;
}
