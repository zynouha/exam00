#include <unistd.h>
int main(int argc, char **argv) //argv is array of arrays
{
    int i = 0;
    while(argv[0][i]){ //the first array
        write(1,&argv[0][i],1);
        i++;
    }
    write(1,"\n",1);
    return(0);
}