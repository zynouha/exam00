//#include <stdio.h>
int		max(int *tab, unsigned int len){
    unsigned int i;
    int max;
    if(len == 0){
        return(0);
    }
    if(tab == NULL){
        return(0);
    }
    max = tab[0];
    i = 0;
    while(i < len){
        if(max < tab[i]){
            max = tab[i];
            i++;
        }
        else{
            i++;
        }
    }
    return(max);
}
/* int main(void){
    int tab[]= {55,78,99,656}; 
    int len = 4;
    printf("%d\n",max(tab,len));
    return(0);
} */