char *swap_cases(char *str){
    int i;
    char c;
    /* if(str == NULL){
        return(NULL);
    } *///wont work because NULL isn't a built-in keyword of the C language itself. It's actually just a macro defined inside certain standard library header files.
    i = 0;
    while(str[i]){
        //c = 0;Variables don't need to be "emptied" before reuse,it's just a labeled spot in memory that holds whatever value you last put into it
        if(str[i]>='a' && str[i] <= 'z'){
            c = str[i] - 32;
            str[i] = c;
        }
        else if(str[i]>= 'A' && str[i] <= 'Z'){
            c = str[i] + 32;
            str[i] = c;
        }
        i++;
    }
    return(str);
}
/* #include <stdio.h>
int main(void){
    char str[] = "AwIlaAy5";
    printf("%s",swap_cases(str));
    return(0);
} */