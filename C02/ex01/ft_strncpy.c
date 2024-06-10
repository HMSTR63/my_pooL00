/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 03:49:51 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/09 05:25:37 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>


/*void ft_putstr(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        write (1, &str[i], 1);
        i++;
    }
}*/

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    i = 0;
    while(i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

/*int main()
{
    int n = 5;
    char src[] = "Hamilton";
    char dest[] = "Russell";

    ft_putstr("src: ");
    ft_putstr(src);
    ft_putstr("\ndest before ft_strncpy: ");
    ft_putstr(dest);
    ft_putstr("\n");

    ft_strncpy(dest, src, n);

    ft_putstr("dest after ft_strncpy: ");
    ft_putstr(dest);
    ft_putstr("\n");

    return 0;
}*/
