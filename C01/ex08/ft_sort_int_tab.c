/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 18:47:10 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/07 19:19:26 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

// This function sorts an array of integers in ascending order
// using the bubble sort algorithm
void ft_sort_int_tab(int *tab, int size)
{
    // Declare an integer variable i to keep track of the current
    // element in the inner loop
    int i;

    // Declare an integer variable temp to temporarily store the
    // value of an element during a swap
    int temp;

    // The outer loop runs size times, where size is the number of
    // elements in the array
    while (size >= 0)
    {
        // Initialize the i variable to 0
        i = 0;

        // The inner loop runs size - 1 times, where i is the index
        // of the current element in the inner loop
        while(i < size - 1)
        {
            // Compare the i-th and i + 1-th elements of the array.
            // If the i-th element is greater than the i + 1-th element,
            // swap the two elements using the temp variable.
            if (tab[i] > tab[i + 1])
            {
                temp = tab[i];
                tab[i] = tab[i + 1];
                tab[i + 1] = temp;
            }

            // Increment the i variable to move to the next element
            // in the inner loop
            i++;
        }

        // Decrement the size variable to move to the next element
        // in the outer loop
        size--;
    }
}


int main()
{
    int tab[5] = {5, 4, 3, 2, 1};
    int i = 0;

    ft_sort_int_tab(tab, 5);
    while(i < 5)
    {
        ft_putchar(tab[i] + '0');
        i++;
    }
    return 0;
}
