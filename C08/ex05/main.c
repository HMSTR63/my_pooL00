/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 18:28:02 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/14 18:34:48 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int main(int ac, char **av)
{
    t_stock_str *tab;
    int i;

    if(ac > 1)
    {
        tab = ft_strs_to_tab(ac - 1, av + 1);
        ft_show_tab(tab);

        // free memory allocated by ft_strs_to_tab
        i = 0;
        while(i < ac - 1)
        {
            free(tab[i].copy);
            i++;
        }
        free(tab);
    }
    return 0;
}
