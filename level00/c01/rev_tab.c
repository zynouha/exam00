#include<stdio.h>
void ft_rev_int_tab(int *tab, int size){
    int i = 0;
    int temp;
    
    while(i < (size / 2)){
        int j = size - 1 - i;
        temp = tab[j];
        tab[j] = tab[i];
        tab[i] = temp;
        i++;
    }


}
int main(){
    int tab[] = {1,2,3,4,5};
    int size = sizeof(tab) / sizeof(tab[0]);
    
    ft_rev_int_tab(tab,size);
    int i = 0;
    while(i < size){
        printf("%d\n",tab[i]);
        i++;
    }
    return 0;
}