/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 22:48:31 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/03 22:52:48 by sojammali        ###   ########.fr       */
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
    while(ac > 1)
    {
        ft_putstr(av[ac - 1]);
        ac--;
    }
    return 0;
}
