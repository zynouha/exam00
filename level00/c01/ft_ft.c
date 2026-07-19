#include <stdio.h>
void    ft_ft(int *n);

void    ft_ft(int *n)
{
    *n = 42;
}





int main()
{
    int nbr = 65;
    int *ptr = &nbr;
    ft_ft(ptr);
    printf("%d", nbr);
    return 0;
}