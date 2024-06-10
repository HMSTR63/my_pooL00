/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:37:27 by sojammali         #+#    #+#             */
/*   Updated: 2024/05/31 17:45:40 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_is_negative(int n)
{
    if (n >= 0)
    {
        write(1, "P", 1);
    }
    else 
    {
        write(1, "N", 1);
    }
}
/*int main()
{
    int n = -11;
    ft_is_negative(n);
    return 0;
}*/
