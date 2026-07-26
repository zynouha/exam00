//#include <stdio.h>
int ft_isspace(char str){
    
    if((str >= 9 && str <= 13) || str == 32){
        return(1);
    }
    else{
        return(0);
    }
}
int ft_atoi(const char *str){
   int i;
   int sign = 1;
   int result = 0;

   if(str == NULL){
    return(0);
   }

   i = 0;
   while(ft_isspace(str[i]) == 1){
    i++;
   }
   if(str[i] == '+' || str[i] == '-'){
    if(str[i] == '-'){
        sign *=-1;
    }
    i++;
   }
   while(str[i]>='0' && str[i] <= '9'){
    result = result * 10 +(str[i] -'0'); //*10 so we can always have 0 to the right to add the next digit to it //str[i]-'0': converting from char to int
    i++;
   }
   /*if(count % 2 != 0){
    return(-(result));
   }*/
   return(result * sign);
}
/* int main(void){
    char str[] = "-1337no";
    printf("%d\n", ft_atoi(str));
    return(0);
} */