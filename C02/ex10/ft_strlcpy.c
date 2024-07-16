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

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int src_len = 0;
    unsigned int i = 0;

    /* Find the end of the source string */
    while (src[src_len] != '\0')
        src_len++;

    /* If the destination buffer is too small, return the total length of the source string */
    if (size == 0)
        return src_len;

    /* Copy as many bytes as will fit into the destination buffer */
    while (i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* Ensure the destination string is null-terminated */
    dest[i] = '\0';

    /* Return the total length of the source string */
    return src_len;
}

/*int main()
{
    char src[] = "Hello, World!";
    char dest1[10];
    char dest2[5];
    char dest3[1];
    char dest4[10] = "";

    printf("%d | %s\n", ft_strlcpy(dest1, src, 10), dest1);
    printf("%d | %s\n", ft_strlcpy(dest2, src, 5), dest2);
    printf("%d | %s\n", ft_strlcpy(dest3, src, 1), dest3);
    printf("%d | %s\n", ft_strlcpy(dest4, "", 5), dest4);
}*/
