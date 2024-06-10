/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 05:00:43 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/08 05:07:59 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return 0;
    }
    return 1;
}

/*int	main()
{
	printf("%d", ft_str_is_numeric("6344"));
	printf("\n%d", ft_str_is_numeric("44HAM"));
	printf("\n%d\n", ft_str_is_numeric("-_134556efghij67"));
}*/
