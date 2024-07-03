/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 02:04:26 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/03 02:42:53 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int res;

    res = 1;
    if(nb < 0)
        return 0;
    while(nb > 0)
    {
        res *= nb;
        nb--;
    }
    return res;
    
}

/*#include <stdio.h>

int main()
{
    int i = 0;
    while(i < 10)
    {
        printf("%d -> %d\n", i, ft_iterative_factorial(i));
            i++;
    }
}*/
