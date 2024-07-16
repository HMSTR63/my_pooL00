/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 15:29:41 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/04 16:02:03 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int ft_strlen(char *s)
{
    int i;

    i = 0;
    while(s[i])
        i++;
    return (i);
}

char *ft_strdup(char *src)
{
    char *dup;
    int i;

    i = 0;

    // Allocate memory for the duplicate string using malloc.
    dup = (char*)malloc(sizeof(char) * ft_strlen(src) + 1);

    // If memory allocation fails, return NULL.
    if(!dup)
        return NULL;

    // Loop through the input string and copy each character to the duplicate string.
    while(src[i])
    {
        dup[i] = src[i];
        i++;
    }

    // Add a null character to the end of the duplicate string to make it null-terminated.
    dup[i] = '\0';

    // Return the duplicate string.
    return (dup);
}

/*int main(int ac, char **av)  //main fun 1//
{
    char *src;
    int i = 0;
    if(ac == 2)
    {
        src = ft_strdup(av[1]);
        while(src[i])
        {
            write(1, &src[i], 1);
            i++;
        }
        write(1, "\n", 1);
        free(src); // Free the memory Please.
    }
    return (0);
}*/

/*#include <stdio.h>
#include <string.h>
int main()
{
    char *src = "HMSTR63";
    char *dup = NULL;
    char *ft_dup = NULL;

    printf("original string --> $%s$ @ %p\n", src, src);

    dup = strdup(src);
    ft_dup = ft_strdup(src);
    printf("duplicate string --> $%s$ @ %p\n", dup, dup);
    printf("ft_duplicate string --> $%s$ @ %p\n", ft_dup, ft_dup);
    
    return (0);
}*/
