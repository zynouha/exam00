#include <stdlib.h>
//#include <stdio.h>
int ft_strlen(char *str){
    int i = 0;
    if(str){
        while(str[i]){
            i++;
        }
    }
    return(i);
}
char    *ft_strdup(char *src){
    char *copy;
    int i;
    if(src == NULL){
        return (NULL);
    }
    copy = malloc(ft_strlen(src) + 1);
    if(copy == NULL){
        return (NULL);
    }
    i = 0;
    while(src[i]){
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return(copy);
}
/* int main(void){
    char try[]= "daudi";
    printf("%s",ft_strdup(try));
    return(0);
}*/