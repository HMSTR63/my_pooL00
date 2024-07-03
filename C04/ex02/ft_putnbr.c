/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 04:52:49 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/29 04:58:00 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void    _putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    unsigned int n;

    n = nb;
    if(nb < 0)
    {
        _putchar('-');
        n *= -1;
    }
    if(n < 10)
    {
        _putchar(n + '0');
    }
    else 
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}


