#include<stdio.h>
int ft_strncmp(char *s1, char *s2, unsigned int n){
    int i = 0;
    while((s1[i]||s2[i]) && i < n){ //the loop stops when reaches the limit N and not when reaches 
                                    // the end of on strings because we need it to reach the if condition
        if(s1[i] != s2[i]){
            return(s1[i] - s2[i]);
        }
        i++;
    }
    return(0);
}
int main(){
    char s1[] = "nouhaila";//8 characters included '\0'
    char s2[] = "nouhaila";
    unsigned int n = 10; //it stops the loop and return 0 because s1 and s2 both are reches the end 
    printf("%d\n",ft_strncmp(s1,s2,n));
    return(0);
}