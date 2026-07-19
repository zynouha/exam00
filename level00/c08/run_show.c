#include "str_stock.h"

struct s_stock_str *ft_strs_to_tab(int ac, char **av);
void ft_show_tab(struct s_stock_str *par);

int main(void)
{
    char *av[] = {"batata", "monada", "khadija"};
    struct s_stock_str *tab;

    tab = ft_strs_to_tab(3, av);
    if (!tab)
        return (1);
    ft_show_tab(tab);
    return (0);
}