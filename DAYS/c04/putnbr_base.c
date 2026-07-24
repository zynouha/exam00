#include<unistd.h>
void ft_putchar(char c){
    write(1,&c,1);
}
void ft_putnbr(int nbr){
    int MIN = -2147483648;
    if(nbr = -2147483648;){
        ft_putchar('-');
        ft_putchar('2');
        ft_putnbr(147483648);
    }
    else if(nbr >= 0 && nbr <= 9){
        ft_putchar(nbr + 48);
    }
    else if( nbr > 9){
        ft_putnbr(nbr / 10);
        ft_putnbr(nbr % 10);
    }
    else if(nbr < 0){
        ft_putchar('-');
        ft_putnbr(-nbr);
    }
}
void ft_putnbr_base(int nbr, char *base){
    int len = 0;
    while(base[len]){
        len ++;
    }
    int i = 0;
    while(nbr){
        ft_putnbr_base((nbr / len),base);
        ft_putnbr_base(nbr % len);
    }
}
int main(){
    int nbr = 12;
    char base[] = "0123456789";
    ft_putnbr_base(nbr,base);
    return(0);
}