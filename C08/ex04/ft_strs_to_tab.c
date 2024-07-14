/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 05:13:30 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/14 05:34:37 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}

char    *ft_strdup(char *src)
{
    char *dup;
    int i;

    i = 0;
    while(src[i] != '\0')
        i++;
    dup = malloc((sizeof(char) * i) + 1);
    if(dup == NULL)
        return (NULL);
    i = 0;

    while(src[i] != '\0')
    {
        dup[i] = src[i];
        i++;
    }
    dup[i] = '\0';
    return (dup);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    t_stock_str *tab;
    int i;

    i = 0;
    tab = malloc(sizeof(t_stock_str) * (ac + 1));
    if(!tab)
        return (NULL);
    while(i < ac)
    {
        tab[i].str = av[i];
        tab[i].copy = ft_strdup(av[i]);
        tab[i].size = ft_strlen(av[i]);
        i++;
    }
    tab[i].str = 0;
    return (tab);
}
