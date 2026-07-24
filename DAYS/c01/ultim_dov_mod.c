#include<stdio.h>
void ft_ultimate_div_mod(int *a, int *b){
    int c;
    int d;
    c = *a / *b;
    d = *a % *b;

    *a = c;
    *b = d;
}
int main(){
    int a = 1337;
    int b = 42;
    printf("%d\n",a);
    printf("%d\n",b);
    ft_ultimate_div_mod(&a, &b);

    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}