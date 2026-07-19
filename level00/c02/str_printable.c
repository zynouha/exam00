#include<unistd.h>
void ft_puchar(char c){
    write(1,&c,1);
}
void ft_putstr_non_printable(char *str){
    int i = 0;
    char arr[] = "0123456789abcdef";
    
    while(str[i]){
        if(!(str[i]>= 32 && str[i] <= 126)){//if str[i] is not printable
            ft_puchar('\\');
            ft_puchar(arr[(unsigned char)str[i]/16]);//unsigned: This is a modifier that tells the compiler not to reserve a bit for negative signs. 
                                                     // It forces the variable to only store positive numbers and zero.
            ft_puchar(arr[(unsigned char)str[i]%16]);
        }
        else{
            ft_puchar(str[i]);
        }
        i++;   
    }
}
int main(){
    char str [] = "\nalloha";
    ft_putstr_non_printable(str);
    return(0);
}