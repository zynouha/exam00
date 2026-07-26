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
        if(c =='z'){
            c = 'm';
        }
        else if(c == 'Z'){
            c = 'M';
        }
        else if((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M')){
            c += 13;
        }
        else if((c >= 'n' && c <= 'y') || (c>= 'N' && c<= 'Y')){
            c -= 13;
        }
        write(1,&c,1);
        i++;
    }
    write(1,"\n",1);
    return(0);
}