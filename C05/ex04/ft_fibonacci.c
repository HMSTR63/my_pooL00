/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 03:38:40 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/03 03:45:22 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int index)
{
   if(index < 0)
        return -1;
   else if(index <= 1)
        return index;
   else 
        return ft_fibonacci(index - 1) + ft_fibonacci(index - 2); 
}

/*#include <stdio.h>
int main()
{
    int i = 0;
    while(i <= 5)
    {
        printf("fib(%d) -> %d\n", i, ft_fibonacci(i));
        i++;
    }
    return 0;
}*/
