#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i = 0;
    while(i < n && src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return(dest);
}
int main(){
    int n = 5; //8
    char src[] = "nouhaila";
    char dest[10];

    ft_strncpy(dest,src,n);
    printf("%s\n",dest);
    return(0);
}