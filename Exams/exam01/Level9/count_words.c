int count_words(char *str){
    int count;
    int i;

    count  = 0;
    i = 0;
    while(str[i]){
        if((str[i] != ' ' && str[i] !='\t') && (i == 0 ||str[i-1] == ' '||str[i-1]=='\t')){
            count += 1;
        }
        i++;
    }
    return(count);
}
#include <stdio.h>
int main(void){
    char *s ="wa7d jouj tlata";
    printf("%d", count_words(s));
    return(0);
}