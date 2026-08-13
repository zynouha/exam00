#include<unistd.h>
int main(int argc, char **argv){
    int end;
    int begin;

    if(argc != 2){
        write(1,"\n",1);
        return(0);
    }
    //1st we move to the end of the string 
    end = 0;
    while(argv[1][end]){
        end++;
    }
    end--; //we subtract 1 cuz "end" is on '\0's index now
    //2nd we skip white spaces from the end if it has any
    while(argv[1][end] == ' ' || argv[1][end] == '\t'){//its true if at least one is true
        end--;
    }
    //3rd: we try to reach the beginning of the word
    while(end >= 0 && (argv[1][end] != ' ' && argv[1][end]!= '\t')){//the loop stops if one becomes false
        end--;
    }
    begin = end + 1; //we add 1 cuz 'end' now isn't really on the 1st index of the word
    while(argv[1][begin] != ' ' && argv[1][begin] != '\t' && argv[1][begin] != '\0'){
        write(1,&argv[1][begin],1);
        begin++;
    }
    write(1,"\n",1);
    return(0);
}
