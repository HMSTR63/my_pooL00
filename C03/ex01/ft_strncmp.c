/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 17:00:20 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/12 19:39:34 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
// This function compares the first 'n' bytes of the string 's1' and 's2'.
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    // 'h' is a counter that will be used to iterate over the strings.
    unsigned int h;
    h = 0;

    // The loop will continue until it has iterated over 'n' bytes,
    // or until it finds a byte in 's1' or 's2' that is equal to '\0' (the null character),
    // which signifies the end of a string in C.
    while ((s1[h] != '\0' || s2[h] != '\0') && h < n)
    {
        // If the 'h'th byte of 's1' is not equal to the 'h'th byte of 's2',
        // the function will immediately return the difference between the two bytes.
        if (s1[h] != s2[h])
        {
            return (s1[h] - s2[h]);
        }

        // If the bytes are equal, the counter 'h' is incremented,
        // and the loop continues to the next pair of bytes.
        h++;
    }

    // If the loop has completed without finding any unequal bytes,
    // the function returns 0, indicating that the first 'n' bytes of 's1' and 's2' are equal.
    return (0);
}

/*int	main()
{
	printf("%d", ft_strncmp("HMSTR", "hmstr", 8));
}*/
