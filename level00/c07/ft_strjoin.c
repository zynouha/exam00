#include <stdlib.h>
#include <stdio.h>
int get_sep_len(char *sep){
    int i = 0;
    while(sep[i]){
        i++;
    }
    return(i);
} //first: count the seperator
int get_total_len(char **strs, char *sep, int sep_len)
{
    int i;
    int j;
    int total_len;

    total_len = 0;
    i = 0;
    while (strs[i])
    {
        j = 0;
        while (strs[i][j])
        {
            total_len++;
            j++;
        }
        if (strs[i + 1]) //whenever u go to a new string, add sep
            total_len += sep_len;
        i++;
    }
    return (total_len);
}
//second: count the length of strs and add seperator to it each time it's a new string
char *ft_strjoin(int size, char **strs, char *sep){
    char *new;
    int i;
    int j;
    int k;
    int l;
    int sep_len;
    int strs_len;

    sep_len = get_sep_len(sep);
    strs_len = get_total_len(strs, sep, sep_len);
    
    new = malloc(sizeof(char) * (strs_len + 1)); //one for null terminator
    if(size <= 0){
        new[0] = '\0';
        return(new);
    }
    if(new == NULL){
        return(NULL);
    }
    i = 0;
    l = 0;
    while(strs[i]){
        j = 0;
        while(strs[i][j]){
            new[l] = strs[i][j];
            j++;
            l++;
        }
        if(strs[i+1]){
            k = 0;
            while(k < sep_len){
                new[l] = sep[k];
                k++;
                l++;
            }
        }
        i++;
    }
    new[l] = '\0';
    return(new);
}
int main(){
    char *strs[] = {"england", "spain", "france"};
    char sep[] = "and";
    int size = 3;

    char *result = ft_strjoin(size, strs, sep); //we only pass "&strs" if we want to make a change on strs[] itself
    printf("%s\n",result);
    free(result);
    return(0);
}