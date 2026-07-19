#include<stdio.h>
int ft_iterative_power(int nb, int power){
    if(power < 0){
        return(0);
    }
    else if(power == 0 && nb == 0){
        return(1);
    }
    int result = 1;
    while(power){
        result *= nb;
        power--;
    }
    return(result);
}
int main(){
    int nb = 2;
    int power = 4;
    printf("%d\n",ft_iterative_power(nb,power));
}