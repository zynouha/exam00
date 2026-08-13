#include <unistd.h>
int main(int argc, char **argv){
    int i;
    int j;

    if(argc != 3){
        write(1,"\n",1);
        return(0);
    }
    i = 0;
    j = 0;    
    while(argv[2][i]){
        if(argv[2][i] == argv[1][j]){
            j++;
        }
        i++;
    }
    if(argv[1][j]=='\0'){
        j = 0;
        while(argv[1][j]){
            write(1,&argv[1][j],1);
            j++;
        }
    }
    write(1,"\n",1);
    return(0);
}