int    count_alen(char *str){
    int i;
    i = 0;
    while(str[i]){
        if(str[i] == 'a'){
            return(i);
        }
        i++;
    }
    return(i);
}
/* #include <stdio.h>
int main(void){
    char str[] = "i know tht u love me";
    printf("%d",count_alen(str));
    return(0);
} */