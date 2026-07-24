//strdup makes a brand new copy of a string, 
// using malloc to reserve space for that copy, and gives you back a pointer to it.
#include <stdlib.h>
#include <stdio.h>
char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
char *ft_strdup(char *src){
    char *duplicate;
    int i = 0;

    while(src[i]){
        i++;
    }//we made this loop to know the length of src

    duplicate = (char *) malloc((sizeof(char) * i)+ 1); //(char *)= type casting, telling malloc the type we're working with
    if(duplicate == NULL){
        return(NULL);
    }

    duplicate = ft_strcpy(duplicate,src);
    
    return (duplicate);
}
int main(){
    
    char src[] = "elissa";
    printf("%s\n",ft_strdup(src));
    return(0);
}
//we first created strcpy to cpy the string
//then we reserved a place in 'duplicate' using malloc,(duplicate is the dest variable)
//since that 'strcpy' returns the srings she copies, we store that return in the variable we already reserved memory in