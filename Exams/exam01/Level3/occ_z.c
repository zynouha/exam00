int occ_z(char *str){
    int i;
    int occ;
    i = 0;
    while(str[i]){
        if(str[i]=='Z'){
            occ += 1;
        }
        i++;
    }
    return(occ);
}
/* #include <stdio.h>
int main(void){
    char *str="fiZZbuZZ";
    printf("%d\n",occ_z(str));
    return(0);
} */