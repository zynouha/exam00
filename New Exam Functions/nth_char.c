#include <unistd.h>
void abcA(char *s, int n){
    int i;
    char c;
    if(n == 0){
        return;
    }
    while(s[i]){
        if((i+1) % n == 0){
            c = n + 48;
            write(1,&c,1);
        }
        else{
            write(1,&s[i],1);
        }
        i++;
    }
}
int main(){
    int n = 3;
    char *s = "ifklmzm";
    abcA(s,n);
    return(0);
}