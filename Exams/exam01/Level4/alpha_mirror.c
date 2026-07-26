#include <unistd.h>
int main(int argc, char **argv){
    int i;
    char mirror_char;
    int mirror_position = 0;

    if(argc != 2){
        write(1,"\n",1);
        return(0);
    }
    i = 0;
    while(argv[1][i]){

        if(argv[1][i]>= 'A' && argv[1][i] <= 'Z'){
            mirror_position = 25 - (argv[1][i]- 'A');
            mirror_char = 'A' + mirror_position;
        }
        else if(argv[1][i] >= 'a' && argv[1][i] <= 'z'){
            mirror_position = 25 - (argv[1][i] - 'a');
            mirror_char = 'a' + mirror_position ; //argv[1][i] = ('m' - (argv[1][i] - 'n'));
        }
        else{
            write(1,&argv[1][i],1);
        }
        write(1,&mirror_char,1);
        i++;
    }
    write(1,"\n",1);
    return(0);
}