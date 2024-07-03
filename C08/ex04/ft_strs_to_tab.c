/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 02:10:47 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/01 02:12:34 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_strs_to_tab.h"
#include <stdlib.h>

char *ft_strcpy(char *dest, const char *src)
{
    char *original_dest = dest;
    while(*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
    return original_dest;
}

int ft_strlen(const char *str)
{
    int len = 0;

    while (str[len])
    {
        len++;
    }
    return len;
}

t_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int len = 0;
    t_stock_str *orr;

    orr = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
    if(orr == NULL)
    {
        return NULL;
    }
    
    while(i < ac)
    {
        len = ft_strlen(av[i]);
        
        orr[i].str = (char *)malloc(sizeof(char) * (len + 1));
        orr[i].copy = (char *)malloc(sizeof(char) * (len + 1));
        
        if(orr[i].str == NULL || orr[i].copy == NULL)
        {
            while(j < i)
            {
                free(orr[j].str);
                free(orr[j].copy);
                j++;
            }
            free(orr);
            return NULL;
        }
        ft_strcpy(orr[i].str, av[i]);
        ft_strcpy(orr[i].copy, av[i]);
        orr[i].size = len;
        i++;
    }
    orr[ac].str = NULL;
    return orr;
}
