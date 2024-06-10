/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 05:46:25 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/05 05:55:00 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_print_numbers(int n)
{
    if (n >= 10)
        ft_putchar((n / 10) + '0');
        ft_putchar((n % 10) + '0');
}*/
void ft_ultimate_div_mod(int *a, int *b)
{
    int div;
    int mod;

    div = *a / *b;
    mod = *a % *b;
    *a = div;
    *b = mod;
}

/*int main()
{
    int x = 44;
    int y = 63;

    ft_ultimate_div_mod(&x, &y);
    
    ft_putchar('x');
    ft_putchar(' ');
    ft_print_numbers(x);

    ft_putchar('\n');

    ft_putchar('y');
    ft_putchar(' ');
    ft_print_numbers(y);
}*/
