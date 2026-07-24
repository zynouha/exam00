#include<stdio.h>
int ft_sqrt(int nb){
    int i = 1;
    if(nb < 0){
        return(0);
    }
    while(i * i <= nb){ //4*4=16 and not < 16
        if(i * i == nb){
            return (i);
        }
        i++;
    }
    return(0);
}
int main(){
    int nb = 16;
    printf("%d\n", ft_sqrt(nb));
    return(0);
}