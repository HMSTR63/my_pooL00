/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:33:15 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/14 18:34:54 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while(*str)
    {
        write(1, &str, 1);
        str++;
    }
}

void    ft_putnbr(int nbr)
{
    unsigned int n;

    n = nbr;
    if(nbr < 0)
    {
        ft_putchar('-');
        n *= -1;
    }
    if(n <= 9)
    {
        ft_putchar(n + 48);
    }
    else 
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

void    ft_show_tab(struct s_stock_str *par)
{
    int i;

    i = 0;
    while(par[i].str)
    {
        ft_putnbr(par[i].size);
        ft_putchar('\n');
        ft_putstr(par[i].str);
        ft_putchar('\n');
        ft_putstr(par[i].copy);
        ft_putchar('\n');
        i++;
    }
}
