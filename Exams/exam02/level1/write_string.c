#include <unistd.h>
void	write_string(char *str){
    int i;
    i = 0;
    while(str[i]){
        write(1,&str[i],1);
        i++;
    }
}
/* #include <stdio.h>
int main(void){
    char *str = "do u hear me";
    write_string(str);
    return(0);
} */