/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 03:25:22 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/08 03:49:23 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/*void ft_putstr(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
}*/

char *ft_strcpy(char *dest, char *src)
{
    int i;

    i = 0;
    while((dest[i] = src[i]) != '\0')
    {
        i++;
    }
    return (dest);
}

/*int main()
{
    char src[] = "Hamilton";
    char dest[] = "Russell";

    ft_putstr("src: ");
    ft_putstr(src);
    ft_putstr("\ndest before ft_strcpy: ");
    ft_putstr(dest);
    ft_putstr("\n");

    ft_strcpy(dest, src);

    ft_putstr("dest after ft_strcpy: ");
    ft_putstr(dest);
    ft_putstr("\n");

    return 0;
}*/
