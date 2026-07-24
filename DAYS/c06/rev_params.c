#include <unistd.h>
int main(int argc, char **argv){
    int j;
    int i = argc - 1; //argc - 1 is the last index
    while(i >= 1){
        j = 0;
        while(argv[i][j]){
            write(1,&argv[i][j],1);
            j++;
        }
        write(1,"\n",1);
        i--;
    }
        return(0);
}