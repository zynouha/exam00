#include <unistd.h>
void ft_putnbr(int nb){
    char c;
    if(nb == -2147483648){
        write(1,"-2",2);
        ft_putnbr(147483648);
    }
    if(nb < 0){
        write(1,"-",1);
        ft_putnbr(-nb);
    }
    else if(nb >= 0 && nb <= 9){
        c = nb + '0';
        write(1,&c,1);
    }
    else if(nb > 9 ){
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}
int main(void){
    int i;
    i = 1;
    while(i <= 100){
        if(i % 3 == 0 &&  i % 5 ==0){
            write(1,"fizzbuzz",8);
        }
        else if(i % 3 == 0){
            write(1,"fizz",4);
        }
        else if(i % 5 ==0){
            write(1,"buzz",4);
        }
        else{
            ft_putnbr(i);
        }
        write(1,"\n",1);
        i++;
    }
    return(0);
}