/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 19:46:46 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/27 19:50:18 by sojammali        ###   ########.fr       */
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
            i++;
        i--;
        while(i >= 0)
        {
            write(1, &av[1][i], 1);
            i--;
        }
        write(1, "\n", 1);
    }
    else 
        write(1, "\n", 1);
    return 0;
}