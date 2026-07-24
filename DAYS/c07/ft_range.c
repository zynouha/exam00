#include <stdlib.h>
#include <stdio.h>
int *ft_range(int min, int max){
    int *range;
    int size;
    int i;
    if(min >= max){
        return(NULL);
    }
    size = max - min;
    range = (int *) (malloc(sizeof(int) * size));
    if(range == NULL){
        return(NULL);
    }
    i = 0;
    while(min < max){
        range[i] = min;
        min++;
        i++;
    }
    return(range); 
}
int main(){
    int min = 5;
    int max = 10;
    int *arr = ft_range(min,max); 
    int i = 0;
    while(i < (max - min)){
        printf("%d",arr[i]);
        i++;
    }
    
    return(0);
}