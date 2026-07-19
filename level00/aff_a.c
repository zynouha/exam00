#include <unistd.h>
int     main(int argc, char **argv){
    int i;
    
    if(argc != 2) //If used (argc > 2) instead, running the program with 0 arguments would fall through into the else
                        // branch and try to read argv[1][i] — but argv[1] doesn't exist in that case, so you'd be dereferencing a null/garbage pointer.
        write(1,"a\n",2);
    else{
        i = 0;
        while(argv[1][i]){
            if(argv[1][i] == 'a'){
                write(1,"a\n",2);
                break;
            }
            i++;
        }
        write(1,'\n',2); //if the loop ends and u don't find 'a' return newline
    }
    return(0);
}