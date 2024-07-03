/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 03:07:44 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/03 03:23:58 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
    if(power < 0)
        return 0;
    else if(power == 0)
        return 1;
    else 
        return ft_recursive_power(nb, power - 1) * nb;
}
/*#include <stdio.h>
int main()
{
    int i = -1;
    while(i <= 10)
    {
        printf("2^%d -> %d\n", i, ft_recursive_power(2, i));
        i++;
    }
    return 0;
}*/
