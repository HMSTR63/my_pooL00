/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 05:49:31 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/03 06:16:30 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print_comb2(void)
{
    int h;
    int m;

    h = 0;
    while(h <= 98)
    {
        m = h + 1;
        while(m <= 99)
        {
            ft_putchar((h / 10) + '0');
            ft_putchar((h % 10) + '0');
            write (1, " ", 1);
            ft_putchar((m / 10) + '0');
            ft_putchar((m % 10) + '0');
            if (h != 98)
            {
                write (1, ", ", 2);
            }
            m++;
        }
        h++;
    }
}
/*int main()
{
    ft_print_comb2();
    return 0;
}*/
