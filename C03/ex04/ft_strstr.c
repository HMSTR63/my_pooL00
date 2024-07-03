/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 01:15:55 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/13 01:23:30 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char *ft_strstr(char *str, char *to_find)
{
    int h;
    int m;
    int s;

    h = 0;
    m = 0;
    s = 0;
    if (to_find[s] == '\0')
        return str;
    while(str[h])
    {
        m = h;
        while (str[m] == to_find[s] && to_find[s] != '\0')
        {
            m++;
            s++;
        }
        if (to_find[s] == '\0')
            return &str[h];
        h++;
        s = 0;
    }
    return 0;
}
