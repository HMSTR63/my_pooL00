/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 02:46:42 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/03 03:01:58 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int res;

    res = 1;
    if(power < 0)
        return 0;
    if(power == 0)
        return 1;
    while(power > 0)
    {
        res *= nb;
        power--;
    }
    return res;
}

/*#include <stdio.h>
int main()
{
    int i = -1;
    while(i <= 10)
    {
        printf("2^%d -> %d\n", i, ft_iterative_power(2, i));
        i++;
    }
    return 0;
}*/
