#include<stdio.h>
int ft_recursive_power(int nb, int power){
    if(power < 0){
        return(0);
    }
    else if(power == 0){
        return(1);
    }
    return(ft_recursive_power(nb, power -1) *nb);
}

int main(){
    int nb = 2;
    int power = 4;
    printf("%d\n",ft_recursive_power(nb,power));
    return(0);
}