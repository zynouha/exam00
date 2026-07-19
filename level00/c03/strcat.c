#include <stdio.h>
char *ft_strcat(char *dest, char *src){
    int i = 0;
    while(dest[i]){
        i++;
    } //move till the end of dest
    int j = 0;
    while(src[j]){
        dest[i] = src[j]; 
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
}
int main(){
    char dest[] = "abcd";
    char src[] = "XYZ";
    printf("%s\n",ft_strcat(dest,src));
    return(0);
}