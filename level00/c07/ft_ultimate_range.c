#include <stdlib.h>
#include <stdio.h>
int ft_ultimate_range(int **range, int min, int max){

    int i;
    int size = max - min;
    if(min >= max){
        return(0);
    }
    *range = malloc(sizeof(int)  * (max - min));
    if(*range == NULL){
        return(-1);
    }
    i = 0;
    while(min < max){
        (*range)[i] = min; //(*range)[i]= dkhl l range and change the index [i]
        min++;
        i++;
    }
    return(i);
}
int main(){
    int min = 5;
    int max = 10;
    int *range;
    printf("%d",ft_ultimate_range(&range,min,max)); //we pass (&range) because we need to change the variable range itself 
    free(range);
    return(0);
}