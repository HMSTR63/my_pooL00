/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 20:01:24 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/27 20:14:57 by sojammali        ###   ########.fr       */
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
                av[1][i] = (av[1][i] - 'a' + 13) % 26 + 'a';
            else if(av[1][i] >= 'A' && 'Z' >= av[1][i])
                    av[1][i] = (av[1][i] - 'A' + 13) % 26 + 'A';
            write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
    }
    else 
        write(1, "\n", 1);
    return 0;
}
