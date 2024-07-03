/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 02:38:36 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/27 03:42:16 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if(n < 10)
    {
        ft_putchar(n + '0');
    }
    else
    {
        ft_putnbr(n / 10);
        ft_putnbr(n % 10);
    }
}

int main()
{
    int n;

    n = 1;
    while(n <= 100)
    {
        if(n % 3 == 0 && n % 5 == 0)
        {
            write(1, "fizzbuzz", 8);
        }
        else if(n % 3 == 0)
        {
            write(1, "fizz", 4);
        }
        else if(n % 5 == 0)
        {
            write(1, "buzz", 4);
        }
        else 
        {
            ft_putnbr(n);
        }
        n++;
        ft_putchar('\n');
    }
}
