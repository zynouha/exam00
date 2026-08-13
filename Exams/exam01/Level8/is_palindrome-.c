#include <unistd.h>
int ft_strlen(char *s){
    int i;
    i = 0;
    while(s[i]){
        i++;
    }
    return(i);
}
int is_palindrome(char *s){
    int i = 0;
    int j = ft_strlen(s) - 1;
    while(i < j){
        if(s[i] != s[j]){
            return(0);
        }
        j--;
        i++;
    }
    return(1);
}
int main(int argc, char **argv){
    if(argc != 2){
        write(1,"\n",1);
        return(0);
    }
    if(is_palindrome(argv[1])){
        write(1,argv[1],ft_strlen(argv[1]));
    }
    write(1,"\n",1);
    return(0);
}