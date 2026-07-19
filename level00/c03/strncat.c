#include <stdio.h>
char *ft_strncat(char *dest, char *src, unsigned int nb){
    int i = 0;
    while(dest[i]){
        i++;
    }
    int j = 0;
    while(src[j] && j < nb){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
}
int main(){
    char dest[] = "Japan";
    char src[] = "Netherlands";
    unsigned int nb = 6;
    printf("%s\n",ft_strncat(dest,src,nb));
    return(0);
}