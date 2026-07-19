#include <unistd.h>
int ft_strcmp(char *s1, char *s2){
    int i;
    int j;

    i=0;
    while(s1[i] && s2[i]){
        if(s1[i] == s2[i]){
            i++;
        }
        else{
            return (s1[i] - s2[i]);
        }
    }
    return(s1[i] - s2[i]);
}
void ft_swap(int size, char **tab){
    int i;
    char *holder;

    while(size > 1){ //do 'laps' arround the array as long as it has elements inside it
        i = 0;
        while(i < size -1){//this one goes through indexes to check them 
            if(ft_strcmp(tab[i], tab[i+1])>0){
                holder = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = holder;
            }
            i++;
        }
        size--;//shrink the array cuz we are assured that one of those indexes reached uts place
    }
}
int main(int argc, char **argv){
    int i;
    int j;
    ft_swap(argc -1,argv +1);
    i = 1;
    while(i < argc){
        j = 0;
        while(argv[i][j]){
            write(1,&argv[i][j],1);
            j++;
        }
        write(1,"\n",1);
        i++;
    }
    return(0);
}
//first of all we made "strcmp" that compares 2 strings and once finds a diffrent letter she returns 
//the substraction (s1[i]-s2[i]). if the return greater than 0 it means s1 is bigger than s2 etc...

//than we made a swap function that swaps the address of the arrays

//and eventually we just printed the params excluding the name of the file