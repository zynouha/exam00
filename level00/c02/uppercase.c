#include <stdio.h>
char *ft_strupcase(char *str){

    while(*str){
        if(*str >= 'a' && *str <= 'z'){
            *str = *str - 32; //go inside the address of the first element and - 32 
        }
        str++; //go to the next address (the *str will go inside that address don't worry)
    }
    return(str);
}
int main(){
    char stri[]="bilalii";
    printf("%s\n",ft_strupcase(stri));
    return 0;
}