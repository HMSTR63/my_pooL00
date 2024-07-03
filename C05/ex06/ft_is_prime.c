/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 04:45:18 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/03 04:54:01 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if(nb < i)
        return 0;
    while(i <= nb / 2)
    {
        if(nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}
/*#include <stdio.h>
int main() {
    int i = 0;
    while(i <= 10)
    {
        printf("%d is prime: %d\n", i, ft_is_prime(i) ? 1 : 0);
        i++;
    }

    return 0;
}*/
