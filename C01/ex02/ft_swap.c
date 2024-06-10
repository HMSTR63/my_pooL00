/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 05:11:46 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/04 05:20:49 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void ft_putchar(char h)
{
    write(1, &h, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648) 
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0) 
    {
        nb *= -1;
        ft_putchar('-');
    }
    if (nb > 9) 
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    } 
    else 
    {
        ft_putchar(nb + '0');
    }
}*/
void ft_swap(int *a, int *b)
{
    int swap;
    
    swap = *a;
    *a = *b;
    *b = swap;
}

/*int main()
{

    int h = 44;
    int r = 63;

    ft_putnbr(h);
    ft_putchar(',');
    ft_putchar(' ');
    ft_putnbr(r);
    ft_putchar('\n');

    ft_swap(&h, &r);

    ft_putnbr(h);
    ft_putchar(',');
    ft_putchar(' ');
    ft_putnbr(r);
    ft_putchar('\n');

    return 0;
}*/
