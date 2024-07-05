/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 22:26:11 by sojammali         #+#    #+#             */
/*   Updated: 2024/07/03 22:33:20 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
    {
        write(1, str++, 1);
    }
    write(1, "\n", 1);
}

int main(int ac, char **av)
{
    if(ac)
        ft_putstr(av[0]);
    return 0;
}
