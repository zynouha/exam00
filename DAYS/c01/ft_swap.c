#include <stdio.h>
void    ft_swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n = 13;
    int b = 37;
    int *pn = &n;
    int *pb = &b;

    printf("%d\n", n);
    printf("%d\n", b);
    
    ft_swap(pn,pb);

    printf("%d\n",n);
    printf("%d\n",b);
    return 0;
}