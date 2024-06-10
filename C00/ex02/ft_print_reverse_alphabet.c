/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 17:20:01 by sojammali         #+#    #+#             */
/*   Updated: 2024/05/31 17:27:45 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_print_reverse_alphabet(void)
{
    int h;

    h = 'z';
    while(h >= 'a')
    {
        write(1, &h, 1);
        h--;
    }
}
