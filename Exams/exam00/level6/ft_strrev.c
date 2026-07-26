int ft_strlen(char *str){
    int i = 0;
    if(str){
        while(str[i]){
            i++;
        }
    }
    return(i);
}
char *ft_strrev(char *str){
    int tmp;
    if(str == NULL){
        return(NULL);
    }
    int len = ft_strlen(str);
    int j = len -1;
    int i = 0;
    while(str[i] && i < len / 2){
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
        j--;
    }
    return(str);
}