#include <unistd.h>
#include <stdlib.h>
int ft_strlen(char *str){
    int i = 0;
    if(str == NULL){
        return(0);
    }
    while(str[i]){
        i++;
    }
    return(i);
}

int main(int argc, char **argv){
    int i;
    int j;
    int l;
    
    if(argc != 4){
        write(1,"\n",1);
        exit(0);
    }
    i = ft_strlen(argv[2]);
    l = ft_strlen(argv[3]);

    
    j = 0;
    while(argv[1][j]){
        if(argv[1][j] == argv[2][0] && i == 1 && l == 1){
            write(1,&argv[3][0],1);
            j++;
        }
        else{
            write(1,&argv[1][j],1);
            j++;
        }
    }
    write(1,"\n",1);
    
    return(0);
}