#include <unistd.h>
int main(int argc, char **argv){
    int i;
    char c;
    if(argc != 2){
        write(1,"\n",1);
        return(0);
    }
    i = 0;
    while(argv[1][i]){
        c = argv[1][i];
        if( c == 'z') //'z' becomes 'a'
            c = 'a';
        else if(c == 'Z')
            c == 'A';
        else if((c >= 'a' && c <= 'y') || (c >= 'A' && c <= 'Y'))
            c = c + 1;
        write(1,&c,1);
        i++;
    }
    write(1,"\n",1);
    return(0);
}