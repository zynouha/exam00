#include<unistd.h>
void ft_putstr(char *str){
    while(*str){
        write(1,str,1); //str is already an addr of its array no need for "&"
        str++; //move to the next address
    }
}
int main(){
    char str[] = "besharmi ki hight";
    ft_putstr(str);
    return (0);
}