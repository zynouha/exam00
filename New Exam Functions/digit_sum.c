#include <unistd.h>
int main(int argc, char **argv){
    int i;
    int sum;
    char c;
    int hold;

    if(argc != 2){
        write(1,"\n",1);
        return(0);
    }
    sum = 0;
    i = 0;
    while(argv[1][i]){
        sum += argv[1][i] - 48; //to convert char to int
        i++;
    }
    while(sum > 9){
        hold = 0
        while(sum > 0){
            hold += sum % 10; //we kow that the % will give us the right digit
            sum = sum / 10 //and / will make that right digit vanish, but we will need those left digit to be moduled again so we can add it to it's next that's why we hold it in 'sum' 
        }
        sum = hold; //we save the adds we made in sum to be checked again if it stills bigger than 9
    }
    c = sum + 48;
    write(1,&c,1);
    write(1,"\n",1);
    
    return(0);
}