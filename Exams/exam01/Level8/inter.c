#include <unistd.h>
int main(int argc, char **argv){
    int i;
    int j;
    int k;
    int seen;
    int found;

    if(argc != 3){
        write(1,"\n",1);
        return(0);
    }
    i = 0;
    while(argv[1][i]){
        found = 0;
        j = 0;
        while(argv[2][j]){
            if(argv[1][i] == argv[2][j]){
                found = 1;
                break;
            }
            else if(argv[1][i] != argv[2][j]){
                j++;
            }
        }
        k = 0; 
        seen = 0;
        while(i > k){ //we made this loop to check if we've ever wrote the letter before
            if(argv[1][i] == argv[1][k]){
                seen = 1;
                break;
            }
            k++;
        }
        if(found == 1 && seen == 0){
            write(1,&argv[1][i],1);
        }
        i++;
    }
    write(1,"\n",1);
    return(0);
}