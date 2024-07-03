/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 17:59:22 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/27 18:03:40 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_space(char c)
{
    if(c == ' ' || c == '\t')
        return (1);
    return (0);
}
int main(int ac, char **av)
{
    int i;

    i = 0;
    if(ac == 2)
    {
        while(av[1][i] != '\0')
            i++;
        i--;
        while(ft_space(av[1][i]))
            i--;
        while(av[1][i] != '\0' && !ft_space(av[1][i]))
            i--;
        i++;
        while(av[1][i] != '\0' && !ft_space(av[1][i]))
        {
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
