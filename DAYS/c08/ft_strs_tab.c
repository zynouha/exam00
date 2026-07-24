#include <stdlib.h>
#include <stdio.h>
#include "str_stock.h"
int ft_strlen(char *str) //We need this to fill in 'size of each string'to know how many bytes to malloc for copy
{
    int i = 0;
    while(str[i]){
       i++; 
    }
    return(i);
}

char *ft_strdup(char *str){
    int len;
    char *new;
    int i;

    len = ft_strlen(str);
    new = (char *) malloc(len + 1);
    if(!new){
        return(NULL);
    }
    i=0;
    while(str[i]){
        new[i] = str[i];
        i++;
    }
    new[i]='\0';
    
    return(new);
}
struct s_stock_str *ft_strs_to_tab(int ac, char **av){
    t_stock_str *tab; // tab is an array of structures
    int i;
    tab = malloc(sizeof(t_stock_str)*(ac +1));
    if(!tab){
        return (NULL);
    }
    i = 0;
    while(i < ac){
        tab[i].size = ft_strlen(av[i]);
        tab[i].str = av[i];
        tab[i].copy = ft_strdup(av[i]);
        if (tab[i].copy == NULL){
            return (NULL);
        } //if strdup returned 'null' error and don't store 'null' in copy
        i++;
    }
    tab[i].str = 0;

    return(tab);
}
/*int main(void){
    int ac = 2;
    char *av[] = {"ana","nta"};
    ft_strs_to_tab(ac,av);
    
    return(0);
}*/