/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 16:51:39 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/12 21:43:56 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_strcmp(char *s1, char *s2)
{
    int h;

    h = 0;
    while (s1[h] && s2[h] && s1[h] == s2[h])
    {
        h++;
    }
    return (s1[h] - s2[h]);
}
