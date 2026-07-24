#include <unistd.h>
int main(int argc, char **argv){
    int i;
    int last;
    if(argc != 2){
        write(1,"\n",1);
        return(0);
    }
    if(argv[1] == NULL){
        return(0);
    }
    i = 0;
    while(argv[1][i]){
        i++;
    }
    last = i - 1;
    
    while(argv[1][last]){
        write(1,&argv[1][last],1);
        last--;
    }
    write(1,"\n",1);
    return(0);
}