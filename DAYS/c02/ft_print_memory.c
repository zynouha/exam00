#include <stdio.h>
#include <unistd.h>
ft_putchar(char c){
    write(1,&c,1);
}
ft_print_addr(int index){
    
}

void *ft_print_memory(void *addr, unsigned int size){
    unsigned int i;
    unsigned char *ptr= addr;//First, cast your void * to unsigned char * so you can move through memory byte-by-byte
    int j;
    if(size == 0){

    }
    i = 0;
    while(i < size){
        i = 0;
        while(addr[i] && i <= 16){
            ft_putchar(adrr[i]);
        }
        i += 16;

    }

    return(addr);
}



int main(void)
{
    char str[] = "Hello, this is a test! just testing bro what's wrong with u?";

    ft_print_memory(str, sizeof(str));
    return (0);
}
