#include<unistd.h>
int ft_isspace(char c){
    if(c == " "||c == "\t"){
        return(1);
    }
    else{
        return(0);
    }
}

int main(int argc, char **argv){
    int i;
    if(argc != 2){
        write(1,"\n",1);
        return(0);
    }
    return(0);
}