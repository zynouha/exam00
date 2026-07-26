#include <unistd.h>
int main(int argc, char **argv){
    int i;
    if(argc < 2){ //argc is still 1 (just the program name). There is no way to run a C program where argc is 0 or negative 
        write(1,"\n",1);
    }
    else{
        i = 0;
        while(argv[1][i]){
            write(1,&argv[1][i],1);
            i++;
        }
        write(1,"\n",1);
    }
    return (0);
}