/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:09:48 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/09 15:26:12 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*Write a program that displays the alphabet, with even letters in uppercase, and
odd letters in lowercase, followed by a newline.*/
void ft_putchar(char c)
{
    write (1, &c, 1);
}
int main(void)
{
    char h;

    h = 97;
    while(h <= 122)
    {
        if (h % 2 == 0)
        {
            ft_putchar(h - 32);
        }
        else
        {   
            ft_putchar(h);
        }
        h++;
    }
    ft_putchar('\n');
    return 0;
}
