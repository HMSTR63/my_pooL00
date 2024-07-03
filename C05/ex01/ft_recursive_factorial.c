/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 02:28:05 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/03 02:42:46 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
    if(nb < 0)
        return 0;
    else if(0 == nb || nb == 1)
        return 1;
    else 
        return ft_recursive_factorial(nb - 1) * nb;
}
/*#include <stdio.h>

int main()
{
    int i = 0;
    while(i < 10)
    {
        printf("%d -> %d\n", i, ft_recursive_factorial(i));
            i++;
    }
}*/


