#include <stdio.h>
int ft_strcmp(char *s1, char *s2){
    int i = 0;
    while(s1[i] && s2[i]){ //this loops stops when one of them reaches '\0'(aka false) because "&&" operator needs both conditions to be "true"
        if(s1[i] != s2[i]){
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (s1[i] - s2[i]); //it compares "/0" with "i"
}
int main(){
    char s1[] = "nouhaila";
    char s2[] = "nouha"; 
    printf("%d\n",ft_strcmp(s1,s2));

    return 0;
}
