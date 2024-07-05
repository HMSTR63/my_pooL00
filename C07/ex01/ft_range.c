/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 18:18:31 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/04 19:14:00 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)  // Define a function 'ft_range' that takes two integers 'min' and 'max' as input arguments and returns a pointer to an array of integers.
{
    int i;          // Declare an integer variable 'i' to be used as a loop counter.
    int *tab;       // Declare a pointer variable 'tab' to hold the array of integers.
    int size;       // Declare an integer variable 'size' to hold the size of the array.

    if(min >= max)  // If 'min' is greater than or equal to 'max',
        return NULL;  // return NULL.

    size = max - min;  // Calculate the size of the array as the difference between 'max' and 'min'.

    // Allocate memory for the array using malloc. The size of the memory block is equal to 'size' times the size of an integer.
    tab = (int*)malloc(sizeof(int) * size);
    if(!tab)  // If memory allocation fails,
        return NULL;  // return NULL.

    i = 0;  // Initialize the loop counter 'i' to 0.

    // Loop through the range [min, max) and fill the array with the values in this range.
    while(min < max)
    {
        tab[i] = min;  // Set the 'i'-th element of the array to the current value of 'min'.
        min++;          // Increment 'min' by 1.
        i++;            // Increment the loop counter 'i' by 1.
    }

    return (tab);  // Return the pointer to the array.
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
	tab = ft_range(min, max);
	i = 0;
	while (i < max - min)
	{
		printf("values between %d and %d --> |%d|\n", min, max, tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
