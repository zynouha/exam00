#include<stdio.h>
int ft_fibonacci(int index){
    if(index < 0){
        return(-1);
    }
    else if(index < 2){
        return(index);
    }
    return(ft_fibonacci(index - 1) + ft_fibonacci(index-2));
}
int main(){
    int index = 2;
    printf("%d\n",ft_fibonacci(index));
    return(0);
}