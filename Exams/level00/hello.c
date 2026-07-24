#include <unistd.h>
int main(void){
    char str[] = "Hello World!\n";
    int i = 0;
    while(str[i]){
        write(1,&str[i],1);
        i++;
    }
    return(0);
}