/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 18:40:36 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/05 22:48:26 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void ft_putchar(char c)
{
    write (1, &c, 1);
}*/
void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
}

/*int main()
{
    char *str = "HMSTR";

    ft_putstr(str);
    return 0;
}*/
