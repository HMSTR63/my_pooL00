/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 22:48:38 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/06 03:37:46 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(int n)
{
    if (n >= 10)
    {
        ft_putchar((n / 10) + '0');
        ft_putchar((n % 10) + '0');
    }
    else
    {
        ft_putchar(n + '0');   
    }
}*/
int ft_strlen(char* str)
{
    int i;

    i = 0;

    while (str[1] != '\0') 
    {
        i++;
    }
    return (i);
}

/*int main()
{
    char* str = "HMSTR";

    int len = ft_strlen(str);
    ft_print_numbers(len);
    return 0;
}*/
