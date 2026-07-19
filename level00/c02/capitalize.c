#include <stdio.h>
char *ft_strlowcase(char *str){
    char *start = str; // save the beginning of the array
    while(*str){
        if(*str >= 'A' && *str <= 'Z'){
            *str = *str + 32;
        }
        str++;
    }
    return(start);
}

char *ft_strcapitalize(char *str){
    ft_strlowcase(str);
    int i = 0;
    int new_word = 1;
    
    while(str[i]){
        // 1. Check if it's a letter
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(new_word){
                str[i] -= 32; // Capitalize if it's the start of a word
            }
            new_word = 0; // Inside a word now, regardless of capitalization
        }
        // 2. Check if it's a number
        else if(str[i] >= '0' && str[i] <= '9'){
            new_word = 0; // Numbers are also part of a word
        }
        // 3. It's a separator (space, punctuation, etc.)
        else{
            new_word = 1; 
        }
        i++;
    }
    return(str);
}

int main(){
    char str[] = "i'm smarter+im better";
    printf("%s\n",ft_strcapitalize(str));
    return(0);
}