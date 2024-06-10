/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 20:56:18 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/04 21:38:00 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print_numbers(int nbr)
{
        ft_putchar((nbr / 10) + '0');
        ft_putchar((nbr % 10) + '0');
}*/

void ft_div_mod(int a, int b, int *div, int *mod)
{
        *div = a / b;
        *mod = a % b;
}

/*int main()
{
    int a = 44;
    int b = 63;
    int x;
    int y;

    ft_div_mod(a, b, &x, &y);

    ft_putchar('a');
    ft_putchar(' ');
    ft_print_numbers(a);

    ft_putchar('\n');

    ft_putchar('b');
    ft_putchar(' ');
    ft_print_numbers(b);   

    ft_putchar('\n');

    ft_putchar('x');
    ft_putchar(' ');
    ft_print_numbers(x);

    ft_putchar('\n');

    ft_putchar('y');
    ft_putchar(' ');
    ft_print_numbers(y);

    return 0;
}*/
