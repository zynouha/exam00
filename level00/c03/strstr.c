#include<stdio.h>
char *ft_strstr(char *str, char *to_find){

    if(*to_find == '\0'){
        return(str);
    }
    int i = 0;
    while(str[i]){
        int j = 0;
        while(to_find[j] && to_find[j] == str[i+j]){
            j++;
        }
        if(to_find[j] == '\0'){
            return(&str[i]);
        }
        i++;
    }
    return(0);
}
    
int main(){
    char str[] = "nouhaila";
    char to_find[] = "ila";
    printf("%s\n",ft_strstr(str,to_find));
    return(0);
}