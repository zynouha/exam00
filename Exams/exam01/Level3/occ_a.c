int occ_a(char *str){
    int i;
    int occ;
    i = 0;
    while(str[i]){
        if(str[i] == 'A'){
            occ += 1;
        }
        i++;
    }
    return(occ);
}
/* #include <stdio.h>
int main(void){
    char *str = "AliAhuon";
    printf("%d\n",occ_a(str));
    return(0);
} */