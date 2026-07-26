#include <unistd.h>
int main(int argc, char **argv){
    int i;
    char c;
    if(argc != 2){
        write(1,"\n",1);
        return(0);
    }
    i = 0;
    while(argv[1][i]){
        if(i % 3 == 0){
            c = '5';
            write(1,&c,1);
        }
        else if(i % 5 == 0){
            c = '3';
            write(1,&c,1);
        }
        else{
            write(1,&argv[1][i],1);
        }
        i++;
    }
    return(0);
}