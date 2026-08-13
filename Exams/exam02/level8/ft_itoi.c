#include <stdlib.h>
int count_digits(int n){
    int count;
    count = 0;
    if(n <= 0){ //if number is 0 or negative, we must reserve memory for either '0' or '-'
        count++;
    }
    while(n != 0){
        n /= 10; //*2
        count++;
    }
    return(count);
}

char    *ft_itoa(int nbr){
    char *arr;
    int len;
    int digit;

    len = count_digits(nbr);
    arr = (char *) malloc(sizeof(char) * len +1);
    if(!arr){
        return(NULL); //handling malloc failing
    }

    arr[len] = '\0'; //null-terminating the array in its last index *3

    if(nbr == 0){
        arr[0] = '0';
        return(arr);
    }
    
    else if(nbr< 0){
        arr[0] = '-';
    }
    while(nbr != 0){
        digit = nbr % 10; // nbr % 10 will give us the very right digit e.g (- 4)
        if(digit < 0)
            digit = - digit;

        len--; //move to the before last index
        arr[len] = digit + '0'; 
        nbr /= 10; //vanish that right digit by dividing on 10
    }
    return(arr);
}
#include <stdio.h>
int main(){
    int n = 2658924;
    printf("%s\n",ft_itoa(n));
    return(0);
}
/*1- we must count digits of 'int' so ce can mallocate

2- Every time you divide an integer by 10, you chop off one digit. So:
1234 / 10 = 123 → 1 digit gone
123 / 10 = 12 → another digit gone
12 / 10 = 1 → another
1 / 10 = 0 → last one, loop stops

3- count_digits returns the len, and the index of the last digit must be len - 1, that's why
we don't need to go to the next last index in this array ('len' already on it)

4- in the while loop, trying to handeling negative numbrs including MIN INT and that by holding 
digit by digit instead of the whole 2147483648 that may cause overflow

NOTE! recheck this code with ai when u're reviewing it
*/