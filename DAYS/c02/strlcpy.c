#include <stdio.h>
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    int len = 0;
    while(src[len]){
        len++;
    }
    int i = 0;
    if(size > 0){ //if destination has space on it
        while(src[i] && i < size -1){
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return(len);
}
int main(){
    char dest[6];
    char src[] = "nouhaila";
    int size = sizeof(dest);
    printf("%d\n",ft_strlcpy(dest,src,size));
    printf("%s\n",dest);
    return(0);
}