#include <unistd.h>
int main(void){ //we won't use argc and argv here
    char i = 122;

    char c;
    while(i >= 97){
        if(i % 2 != 0){
            c = i - 32; //we can do (i = i - 32 ) cuz 'i' will lose it's true value
            write(1,&c,1); 
        }
        else{
        write(1,&i,1);
        }
        i--;
    }
    return(0);
}