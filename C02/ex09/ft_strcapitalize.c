/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 04:36:34 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/09 05:22:07 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

char *ft_strcapitalize(char *str) // define a function that takes a string as input and returns a modified string
{
    unsigned int i; // declare an unsigned integer variable i to be used as a loop counter

    i = 0; // initialize i to 0
    if (str[i] >= 'a' && str[i] <= 'z') // check if the first character of the string is a lowercase letter
    {
        str[i] -= 32; // if it is, convert it to uppercase by subtracting 32 from its ASCII value
    }
    i = 1; // set i to 1 to start processing the rest of the string
    while(str[i] != '\0') // loop through the string until the null terminator is reached
    {
        if (str[i] >= 'A' && str[i] <= 'Z') // check if the current character is an uppercase letter
        {
            str[i] += 32; // if it is, convert it to lowercase by adding 32 to its ASCII value
        }

        // check if the current character is a lowercase letter and the previous character is not a digit, a lowercase letter, or an uppercase letter
        if (!(str[i - 1] >= '0' && str[i - 1] <= '9')
            && !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
                && !(str[i - 1] >= 'A' && str[i - 1] <= 'Z')
                    && str[i] >= 'a' && str[i] <= 'z')
        {
           str[i] -= 32; // if the conditions are met, convert the current character to uppercase by subtracting 32 from its ASCII value
        }

        i++; // increment i to move to the next character in the string
    }

    return (str); // return the modified string
}
