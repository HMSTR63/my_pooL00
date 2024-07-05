/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 01:07:50 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/05 01:15:12 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)  // Define a function 'ft_ultimate_range' that takes a pointer to a pointer to an integer 'range', and two integers 'min' and 'max' as input arguments, and returns an integer.
{
    int i;  // Declare an integer variable 'i' to be used as a loop counter.

    i = 0;  // Initialize the loop counter 'i' to 0.

    if(min >= max)  // If 'min' is greater than or equal to 'max',
    {
        *range = NULL;  // set '*range' to NULL.
        return (0);  // return 0.
    }

    // Allocate memory for an array of integers using malloc. The size of the memory block is equal to 'max' minus 'min' times the size of an integer.
    *range = malloc(sizeof(int) * (max - min));

    if(*range == 0)  // If memory allocation fails,
        return (0);  // return 0.

    // Loop through the range [min, max) and fill the array with the values in this range.
    while(min < max)
    {
        (*range)[i] = min;  // Set the 'i'-th element of the array to the current value of 'min'.
        min++;              // Increment 'min' by 1.
        i++;                // Increment the loop counter 'i' by 1.
    }

    return (i);  // Return the size of the array.
}


/*#include <stdio.h>

int		main(void)
{
	int i;
	int *tab;
	int min;
	int max;

	min = 5;
	max = 10;
	ft_ultimate_range(&tab, min, max);
	i = 0;
	while (i < max - min)
	{
		printf("values between %d and %d --> |%d|\n", min, max, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
