#include <unistd.h>
int main(void){
    char c;
    int i= 97; 
    while(i <= 122){
        if(i % 2 == 0){
            c = i - 32; //'a'97 - 32 = 'A'65
            write(1,&c,1);
        }
        else{
            c = i; //When we do c = i, we're taking the number out of i's 4-compartment box and putting it into c's 1-compartment box. (4 bytes to 1byte)
            write(1,&c,1); 
        }
        i++;
    }
    return(0);
}