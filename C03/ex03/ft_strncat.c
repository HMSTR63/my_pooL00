/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 22:24:00 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/12 22:29:04 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int h;
    unsigned int m;

    h = 0;
    m = 0;
    while (dest[h] != '\0')
        h++;
    while (src[m] != '\0' && m < nb)
    {
        dest[h] = src[m];
        m++;
        h++;
    }
    dest[h] = '\0';
    return (dest);
}
