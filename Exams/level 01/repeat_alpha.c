#include <unistd.h>
int main(int argc, char **argv){
    int i;
    int j;
    if(argc != 2){
        write(1,"\n",1);
        return(0);
    }

    if(argv[1] == NULL){
        write(1,"\n",1);
        return(0);
    }
    
    i = 0;
    while(argv[1][i]){
        if(argv[1][i] >= 'a' && argv[1][i] <= 'z'){ //lets say that i = b;
            j = argv[1][i];
            while(j >= 'a'){                     // now j = b
                write(1,&argv[1][i],1);          // it keeps printing b until it hits a
                j--;
            }
        }
        else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z'){
            j = argv[1][i];
            while(j >= 'A'){
                write(1,&argv[1][i],1);
                j--;
            }
        }
        else{
            write(1,&argv[1][i],1);
        }
        i++;
    }
    write(1,"\n",1);
    return(0);
}