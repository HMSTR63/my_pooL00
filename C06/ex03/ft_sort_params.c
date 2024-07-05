/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 22:56:26 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/04 01:07:49 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

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

void    ft_swap(char **s1, char **s2)
{
    char *tmp;

    tmp = *s1;
    *s1 = *s2;
    *s2 = tmp;
}

int main(int ac, char **av)
{
    int si;
    int i;

    si = 1;
    while(si < ac)
    {
        while(ft_strcmp(av[si], av[si - 1]) < 0 && si > 1)
        {
            ft_swap(&av[si], &av[si - 1]);
            si--;
        }
        si++;
    }
    i = 1;
    while(i < ac)
    {
        ft_putstr(av[i]);
        i++;
    }
    return 0;
}
