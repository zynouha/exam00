#include <unistd.h>
#include "str_stock.h"

void ft_putstr(char *str){
    
    int i = 0;
    while(str[i]){
        write(1,&str[i],1);
        i++;
    }
}

void ft_putnbr(int nb){
    char c;
    if (nb == -2147483648){
        write(1,"-2",2);
        ft_putnbr(147483648);
    }
    else if(nb < 0){
        write(1,"-",1);
        ft_putnbr(-nb);
    }
    else if(nb > 9){
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else{
        c = nb + 48;
        write(1,&c,1);
    }
}

void ft_show_tab(struct s_stock_str *par){

    int i = 0;
    while(par[i].str){
        ft_putstr(par[i].str);
        write(1,"\n",1); 
        
        ft_putnbr(par[i].size);
        write(1,"\n",1);

        ft_putstr(par[i].copy);
        write(1,"\n",1);

        i++;
    }
}

