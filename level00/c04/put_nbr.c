#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_putnbr(int nb){
    int MIN = -2147483648;
    if(nb > 0 && nb < 9){
        ft_putchar(nb + '0');
    }
    if(nb == MIN){
        write(1,"- 2",3);
        ft_putnbr(147483648);
    }
    else if(nb > 9){
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else if (nb < 0){
        ft_putchar('-');
        ft_putnbr(-nb); //سالب فالسالب  = موجب
    }
}
int main(){
    int nbr = -555;
    ft_putnbr(nbr);
    return(0);
}