#include <stdio.h>
void ft_sort_int_tab(int *tab, int size){
    int hold;
    while(size > 1){
        int i = 0;
        while(i < size -1){ //no need for the last element to be sorted
            if(tab[i]>tab[i+1]){
                hold = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = hold;
            }
            i++;
        }
        size--; //if we got here it means that we sorted an element so we shrink the array
    }
}
int main(){
    int tab[]={6,2,1,4,5,3};
    int size = sizeof(tab) / sizeof(tab[0]);

    int j = 0;
    while(j < size){
    printf("%d\n",tab[j]);
    j++;
    }
    ft_sort_int_tab(tab,size);
    int h = 0;
    while(h < size){
    printf("%d\n",tab[h]);
    h++;
    }

    return(0);
}
