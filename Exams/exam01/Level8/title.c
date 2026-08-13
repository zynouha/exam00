#include <unistd.h>
int main(int argc, char **argv){
    int i;
    int j;
    char c;
    if(argc < 2){
        write(1,"\n",1);
        return(0);
    }

    i = 1;
    while(argv[i]){
        j = 0;
        while(argv[i][j]){
            if(j==0 && argv[i][j]>='a' && argv[i][j]<= 'z'){
                c = argv[i][0] - 32;
                write(1,&c,1);
            }
            else if(argv[i][j]>='a' && argv[i][j]<='z' && (argv[i][j-1] == ' ' || argv[i][j-1]=='\t')){
                c = argv[i][j] - 32;
                write(1,&c,1);
            }
            else{
                write(1,&argv[i][j],1);
            }
            j++;
        }
        write(1,"\n",1);
        i++;
    }
    return(0);
}