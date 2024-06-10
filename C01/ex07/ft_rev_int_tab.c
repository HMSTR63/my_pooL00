/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 17:10:05 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/07 17:44:48 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void ft_putchar(char c)
{
    write (1, &c, 1);
}*/

void ft_rev_int_tab(int *tab, int size)
{
    int p1;
    int p20;
    int temp;

    p1 = 0;
    p20 = size - 1;
    while(p1 < p20)
    {
        temp = tab[p1];
        tab[p1] = tab[p20];
        tab[p20] = temp;
        p1++;
        p20--;
    }
}

/*int main()
{
    int tab[5] = {1, 2, 3, 4, 5};
    int i = 0;

    ft_rev_int_tab(tab, 5);
    while (i < 5)
    {
        ft_putchar(tab[i] + '0');
        i++;
    }
    return 0;
}*/
