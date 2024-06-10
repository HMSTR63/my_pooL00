/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 04:35:38 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/08 05:00:36 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int i;

    i = 0;
    if (str[i] == '\0')
    {
        return 1;
    }
    while(str[i] != '\0')
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str [i] >= 'a' && str[i] <= 'z'))
            i++;
        else
            return 0;
    }
    return 1;

}
/*int main()
{
	printf("%d", ft_str_is_alpha("abcdefghijkl"));
	printf("\n%d", ft_str_is_alpha("abc1defghijkl"));
	printf("\n%d\n", ft_str_is_alpha(""));
}*/
