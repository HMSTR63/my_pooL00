/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 17:34:06 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/14 18:34:23 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_STR_H
#define FT_STOCK_STR_H

#include <stdlib.h>

typedef struct s_stock_str 
{
    int size;
    char* str;
    char* copy;
} t_stock_str;

void    ft_show_tab(struct s_stock_str *par);
t_stock_str *ft_strs_to_tab(int ac, char **av);
void    ft_putchar(char c);
void    ft_putnbr(int nb);
void    ft_putstr(char *str);

#endif // !FT_STOCK_STR_H
