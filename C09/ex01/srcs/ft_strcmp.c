/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 00:24:38 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/15 00:29:28 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int    ft_strcmp(char *s1, char *s2)
{
    while(*s1 == *s2 && *s1 && *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}