/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 05:28:40 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/08 16:28:50 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        if(str[i] >= ' ' && str[i] <= '~')
            i++;
        else
            return 0;
    }
    return 1;
}

/*int	main()
{
	printf("%d", ft_str_is_printable("ABdDCDEE"));
    printf("\n%d", ft_str_is_printable("abcAdefghijkl"));
    printf("\n%d", ft_str_is_printable("-_134556efSghij67"));
}*/
