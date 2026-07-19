#include <unistd.h>

void	ft_print_numbers(void){
    char i = '0';
    //char x;
    while(i <= '9'){
        //x = i + 48;
        write(1,&i,1);
        i++;
    }
}
int main(){
    ft_print_numbers();
    return(0);
}