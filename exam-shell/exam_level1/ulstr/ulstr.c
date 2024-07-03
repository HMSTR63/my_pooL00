/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:08:36 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/27 23:09:01 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int main(int ac, char **av)
{
    int i;

    i = 0;
    if(ac == 2)
    {
        while(av[1][i] != '\0')
        {
            if(av[1][i] >= 'a' && 'z' >= av[1][i])
            {
                av[1][i] -= 32; 
            }
            else if(av[1][i] >= 'A' && 'Z' >= av[1][i])
            {
                av[1][i] += 32;
            }
            write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else 
        write(1, "\n", 1);
    return 0;
}