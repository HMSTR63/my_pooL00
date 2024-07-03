/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 01:38:41 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/29 05:15:29 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(const char *str)
{
    int sign;
    int res;

    res = 0;
    sign = 1;
    while(*str == ' ' || (*str >= '\t' && '\r' >= *str))
    {
        str++;
    }
    
    while(*str == '-' || *str == '+')
    {
        if(*str == '-')
            sign *= -1;
        str++;
    }
    while(*str && *str >= '0' && '9' >= *str)
    {
        res = res * 10 + (*str - '0');
        str++;
    }
    return res * sign;
}
