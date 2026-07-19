#include<stdio.h>
int ft_length(char *str){
    int a = 0;
    while(str[a]){
        a++;
    }
    return (a);
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    int i = 0;
    while(dest[i]){
        i++;
    }
    int holder = i; //holds 8 while it size is 12

    if (size == 0 || size < holder) { //in case dest > the passed SIZE
        return (size + ft_length(src));
    }
    int j = 0;
    while(src[j] && i < size - 1){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (ft_length(src) + holder);
}
int main(){
    char dest[12] = "Nouhaila";
    char src[] = "Zayi";
    int size = sizeof(dest);
    printf("%d\n",ft_strlcat(dest,src,size));
    return(0);
}