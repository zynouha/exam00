#include<stdlib.h>
int is_space(char c){
    return(c==' ' || c == '\t' || c =='\n');
}

int count_word(char *s){
    int i;
    int count;
    if(!s){
        return(0);
    }
    count = 0;
    i = 0;
    while(s[i]){
       while(is_space(s[i])){ //skip white spaces in the beginning
        i++;
       }
       if(s[i]){
        count ++;
       }
       while(s[i] && !is_space(s[i])) //skip the letters of the word 
       i++;
    }
    return(count);
}

char *word_malloc(char *str){
    int i;
    char *inside;

    i = 0;
    while(str[i] && !is_space(str[i])){
        i++;
    }//calculating the length of the word (the spaces will be skipped in "ft_split")
    inside = (char *)malloc(sizeof(char) * (i + 1));
    if(!inside){
        return(NULL);
    }
    i = 0; //now filling that mallocated array
    while(str[i]&&!is_space(str[i])){
        inside[i] = str[i];
        i++;
    }
    inside[i] = '\0';
    return(inside);
}

char    **ft_split(char *str){
    int words;
    char **arr;
    int len;
    int j; //arr index

    words = count_word(str);
    arr = (char **) malloc(sizeof(char *) * (words +1));
    if(!arr){
        return(NULL);
    }
    j = 0;
    while(*str){
        while(is_space(*str)){
            str++;
        }
        if(*str){
            arr[j] = word_malloc(str); //filling 'arr' with the pointer of each array_word
            len = 0;
            while(str[len] && !is_space(str[len])){
                len++;
            }
            str = str + len; //move 'len' adresses forward
            j++; //move to the next empty slot in arr
        } 
    }
    arr[j] = '\0';
    return(arr);
}
#include <stdio.h>
int main(void)
{
	char	**result;
	int		i;

	result = ft_split("  Lost in your beautiful eyes  ");
	if (!result)
	{
		printf("ft_split returned NULL\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("word %d: \"%s\"\n", i, result[i]);
		i++;
	}
	return (0);
}

/*"lost in your eyes" -> [[lost],[in],[your],[eyes]]
1) we reserving memory for the words (how many arrays should be in the array)
  1-1) counting how many words in str

2)after reserving memory for the outer array now will try to malloc each word in a separate array
    and then fill the outer array with the addr. of each
 2-1) the word_malloc() is the function who do that (it knows that it should stop when te word ends)

3)trying to fill the outer loop with those addresses of the words.
*/