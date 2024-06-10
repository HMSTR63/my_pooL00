/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:26:59 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/03 16:31:24 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char h)
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
}
/*int main(void)
{
    write(1, "Test 1 : ", 9);
    ft_putnbr(50);
    write(1, "\n", 1);
    write(1, "Test 2 : ", 9);
    ft_putnbr(2147483647);
    write(1, "\n", 1);
    write(1, "Test 3 : ", 9);
    ft_putnbr(-2147483648);
    write(1, "\n", 1);
    write(1, "Test 4 : ", 9);
    ft_putnbr(0);
    write(1, "\n", 1);
    return (0);
}*/
