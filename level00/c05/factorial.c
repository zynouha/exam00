#include <stdio.h>
int ft_iterative_factorial(int nb){
    if(nb < 0){
        return (0);
    }
    else if(nb == 0 || nb == 1){
        return (1);
    }
    int result = 1;
    while (nb){
        result = result * nb;
        nb--;
    }
    return(result);
}
int main(){
    int nb = 4;
    printf("%d",ft_iterative_factorial(nb));
    return(0);
}