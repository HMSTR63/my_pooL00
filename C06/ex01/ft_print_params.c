/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 22:34:17 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/03 22:53:43 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
        write(1, str++, 1);
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    int i;

    i = 1;
    while(ac > i)
        ft_putstr(av[i++]);
    return 0;
}
