/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 04:40:40 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/04 04:57:39 by sojammali        ###   ########.fr       */
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
void ft_ft(int *nbr)
{
    *nbr = 42;
}
/*int main()
{
    int n;
    int *nbr;
    
    
    nbr = &n;
    ft_ft(nbr);
    ft_putnbr(n);

}*/
