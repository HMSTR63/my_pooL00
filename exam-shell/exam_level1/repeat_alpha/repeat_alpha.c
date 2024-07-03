/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:27:54 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/27 19:38:46 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int ac, char **av)
{
    int i;
    int rep;

    i = 0;
    if(ac == 2)
    {
        while(av[1][i] != '\0')
        {
            if(av[1][i] >= 'a' && 'z' >= av[1][i])
            {
                rep = av[1][i] - 'a';
            }
            else if(av[1][i] >= 'A' && 'Z' >= av[1][i])
            {
                rep = av[1][i] - 'A';
            }
            while(rep > 0)
            {
                write(1, &av[1][i], 1);
                rep--;
            }
            write(1, &av[1][i], 1);
            i++;
        }
        write(1, "\n", 1);
        return 0;
    }
    else 
        write(1, "\n", 1);
    return 0;
}
