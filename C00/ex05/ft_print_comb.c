/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 21:29:55 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/01 03:40:40 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char hr)
{
    write(1, &hr, 1);
}
void ft_print_comb(void)
{
    char h, m, s;
    h = '0';
    while (h <= '7')
    {
        m = h + 1;
        while (m <= '8')
        {
            s = m + 1;
            while (s <= '9')
            {
                ft_putchar(h);
                ft_putchar(m);
                ft_putchar(s);
                if (h != '7')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                s++;
            }
            m++;
        }
        h++;
    }
}
/*int main()
{
        ft_print_comb();
        return 0;
}*/
