#include <stdio.h>
int ft_is_prime(int nb){
    if(nb <= 1){
        return(0);
    }
    else if(nb == 2){
        return(1);
    }
    else if(nb % 2 == 0){
        return(0);
    }
    int i = 3;
    while(i < nb){
        if(nb % i == 0){
            return(0);
        }
        i++;
    }
    return(1);
}
int ft_find_next_prime(int nb){
    nb++; //check the next number
    while(!ft_is_prime(nb)){ 
        nb++; 
    }
    return(nb);
}

int main(){
    int num = 19;
    printf("%d\n",ft_find_next_prime(num));
    return(0);
}