#include <stdlib.h>
int     *ft_rrange(int start, int end){
    int i;
    int *arr;
    int size;
    int current;

    if(end >= start){
        size = end - start + 1;
    }
    else{
        size = start - end +1;
    }

    arr = (int *) malloc(sizeof(int) * size);
    if(!arr){
        return(NULL);
    }
    current = end;
    i = 0;
    while(i < size){
        if(end > start){
            arr[i] = current;
            current--;
        }
        else{
            arr[i] = current;
            current++;
        }
        i++;
    }
    return(arr);
}


/* #include <stdio.h>
int main(void)
{
    int s = 0;
    int e = -3;
    int *arr;
    int i;
    int size;

    arr = ft_rrange(s, e);
    if (!arr)
        return (1);

    if (e >= s)
        size = e - s + 1;
    else
        size = s - e + 1;

    i = 0;
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    // Don't forget to free your malloc!
    free(arr);
    return (0);
} */
/*
same steps we did in ft_range, except this time we start from 'end' variable 
*/