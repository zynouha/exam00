#include <stdio.h>
int ft_is_prime(int nb){
    if(nb == 2){
        return(1);
    }
    else if(nb <= 1){
        return(0);
    }
    else if(nb % 2 == 0){ //the math says that even numbers are not prime
        return(0);
    }
    int i = 3; //all the numbers can be divided by 1 and itself so we start at "2" but actually "3" cuz we checked "2" in the line above
    while(i < nb){ //we stop at (nb - 1),cuz in math if we divided a num by a greater num,the modulo will always be the number itself
        if(nb % i == 0){
            return(0);//it can be devided on third number(rather than 1 and itself) so its not a prime 
        }
        i++;
    }
    return(1);
}
int main(){
    int number = 19;
    printf("%d\n",ft_is_prime(number));
    return(0);
}
//a prime number is a number that can only be divided by 1 and itself