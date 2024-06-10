/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:32:23 by sojammali         #+#    #+#             */
/*   Updated: 2024/05/31 17:35:48 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char h)
{
    write(1, &h, 1);
}

void ft_print_numbers(void)
{
    int h;

    h = 0;
    while(h <= 9)
    {
        ft_putchar(h + '0');
        h++;
    }
}
/*int main()
{
    ft_print_numbers();
    return 0;
}*/
