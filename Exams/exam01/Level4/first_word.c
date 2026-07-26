#include <unistd.h>
int main(int argc, char **argv){
    int j;
    if(argc != 2){
        write(1,"\n",1);
    }
    else{
            j = 0;
            while(argv[1][j] == ' ' || argv[1][j] == '\t') //if first characters are spaces and tabs, go forward//First loop: skip past any leading spaces/tabs
                j++;
            while(argv[1][j] && argv[1][j] != ' ' && argv[1][j] != '\t'){
                write(1,&argv[1][j],1);
                j++;
            }//Second loop: print characters until we hit a space/tab or the end of the string (argv[1][j] being '\0')
            write(1,"\n",1);
        }
    return(0);
}