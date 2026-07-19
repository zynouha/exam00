#include<stdio.h>
int ft_atoi(char *str){
    int i;
    int count = 0;
    int result = 0;
    i = 0;
    while(str[i] == 32 || str[i] >= 9 && str[i] <= 13){ //skip spaces
        i++;
    }
    while(str[i]=='+' || str[i] == '-'){ //handle signs
        if(str[i] == '-'){
            count++; //count only the - sings
        }
        i++;
    }
    while(str[i] >='0' && str[i] <= '9'){
        result = result * 10 + (str[i]-'0');//to get the intiger velue of those digits
        i++;
    }
    if(count % 2 == 1){
        return(-(result));
    }
    return(result);
}
int main(){
    char str[] = "  --+-2003nouha";
    printf("%d\n",ft_atoi(str));
    return(0);
}