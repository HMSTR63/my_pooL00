/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 05:14:10 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/08 05:20:37 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            i++;
        else
            return 0;
    }
    return 1;
}

/*int	main()
{
	printf("%d", ft_str_is_uppercase("ABDCDEE"));
    printf("\n%d", ft_str_is_uppercase("abcAdefghijkl"));
    printf("\n%d", ft_str_is_uppercase("-_134556efSghij67"));
}*/
