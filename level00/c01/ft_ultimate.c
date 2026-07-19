#include <stdio.h>
void    ft_ultimate(int *********nbr){
    *********nbr = 42;
}



int main(){
    int n = 1337;
    printf("%d \n",n);
    int *ptr1 = &n;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;
    int ****ptr4 = &ptr3;
    int *****ptr5 = &ptr4;
    int ******ptr6 = &ptr5;
    int *******ptr7 = &ptr6;
    int ********ptr8 = &ptr7;
    int *********ptr9 = &ptr8;


    ft_ultimate(ptr9);

    printf("%d \n",n);
    return 0;
}