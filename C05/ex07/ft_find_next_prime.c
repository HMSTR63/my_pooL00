/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 16:10:49 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/03 16:18:08 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_is_prime(int nb)
{
    int i;

    i = 2;
    if(nb < i)
        return 0;
    while(i <= nb / i)
    {
        if(nb % i == 0)
            return 0;
        i++;
    }
    return 1;
}

int	ft_find_next_prime(int nb)
{
    if(nb < 2)
        return 2;
    while(nb >= 2)
    {
        if(ft_is_prime(nb) == 1)
            return nb;
        nb++;
    }
    return 0;
}

/*#include <stdio.h>
int main()
{
    int n = 0;
    while(n <= 10)
    {
        printf("the next prime number of %d is -> %d\n", n, ft_find_next_prime(n));
        n++;
    }
    return 0;
}*/
