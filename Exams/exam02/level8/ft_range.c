#include <stdlib.h>
int     *ft_range(int start, int end){
    int size;
    int *arr;
    int i;
    int current;

    if(end < start){
        size = start - end +1;
    }
    else{
        size = end - start + 1;
    }

    arr = (int *) malloc(sizeof(int)*size);
    if(!arr){
        return(NULL);
    }
    current = start;
    i = 0;
    while(i < size){
        if(end < start){
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

    arr = ft_range(s, e);
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
/* 1) we count the size of the array will mallocate,handling also if end was smaller than start
and then check if the malloc worked
2) filling the array we created starting from the variable 'start', the desicion of we're gonna 
go forward or back depends on whether 'end' was greater than 'start' or the opposite
*/