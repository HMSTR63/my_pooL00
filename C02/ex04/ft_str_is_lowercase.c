/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 05:08:48 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/08 05:13:53 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            i++;
        else
            return 0;
    }
    return 1;
}

/*int	main()
{
	printf("%d", ft_str_is_lowercase("abcdefghijkl"));
    printf("\n%d", ft_str_is_lowercase("abcAdefghijkl"));
    printf("\n%d", ft_str_is_lowercase("-_134556efSghij67"));
}*/
