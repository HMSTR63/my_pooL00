/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 03:29:33 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/11 04:26:08 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*#include <unistd.h>
int ft_strlen(char* str)
{
    int h;

    h = 0;
    while (str[h] != '\0') {
        h++;
    }
    return (h);
}
unsigned int ft_strlcpy(char* dest, char* src, unsigned int size)
{
    unsigned int str_len;
    unsigned int h;

    str_len = ft_strlen(dest);
    h = 0;
    if (size <= 0) 
    {
        return str_len;
    }
    while (h < size - 1 && src[h] != '\0') 
    {
        dest[h] = src[h];
        h++;
    }
    dest[h] = '\0';
    return str_len;
}*/

/*unsigned int ft_strlcpy(char* dest, char* src, unsigned int size)
{
    unsigned int h;

    h = 0;
    if (size == 0) 
    {
        return h;
    }
    while (h < size - 1 && src[h] != '\0') 
    {
        dest[h] = src[h];
        h++;
    }
    dest[h] = '\0';
    return h;
}*/


/*int main()
{
    char src[] = "Hello, World!";
    char dest[] = "";
    printf("%d | %s\n", ft_strlcpy(dest, src, 10), dest);
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return(i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	x;

	x = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (src [i] != '\0' && i < size - 1)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (x);
}
