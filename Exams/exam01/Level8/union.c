#include <unistd.h>
int main(int argc, char **argv){
    int i;
    int j;
    int k;
    int l;
    int found;

    if(argc != 3){
        write(1,"\n",1);
        return(0);
    }

    i = 1;
    while(argv[i]){
        j = 0;
        while(argv[i][j]){
            found = 0;
            k = 1;
            while(k <= i){
                l = 0;
                while(argv[k][l] && (k < i || l < j)){
                    if(argv[i][j] == argv[k][l]){
                        found = 1;
                    }
                    l++;
                }
                k++;
            }
            if(found == 0){
                write(1,&argv[i][j],1);
            }
            j++;
        }
        i++;
    }
    write(1,"\n",1);
    return(0);
}
