/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_mod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moustahil <abcd>                           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 20:50:41 by moustahil         #+#    #+#             */
/*   Updated: 2026/07/11 20:55:02 by moustahil        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}

int main(){
    int    a = 12;
    int    b = 2;
    int    mod;
    int    div;

    ft_div_mod(a, b, &div, &mod);
    printf("%d\n",div);
    printf("%d\n", mod);
    return 0;
}