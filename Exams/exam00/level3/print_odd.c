#include <unistd.h>
int main(int argc, char **argv){
    int i;
    int j;
    if(argc < 2){
        return(0);
    }
    i = 1;
    while(argv[i]){
        j = 0;
        while(argv[i][j]){
            if(j % 2 != 0){
                write(1,&argv[i][j],1);
            }
            j++;
        }
        i++;
    }
    return(0);
}