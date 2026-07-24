#include<stdio.h>
int ft_str_is_numeric(char *str){
    while(*str){
        if(*str>='0' && *str<='9'){
            str++;
        }
        else{
            return(0);
        }
    }
    return(1);

}
int main(){
    char string[] = "1995";
    printf("%d\n",ft_str_is_numeric(string));
    return 0;
}