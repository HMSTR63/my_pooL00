/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojammali <sojammali1337@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 03:57:48 by sojammali         #+#    #+#             */
/*   Updated: 2024/06/13 04:05:13 by sojammali        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dl;
	unsigned int	ii;
	unsigned int	sl;

	dl = ft_strlen(dest);
	sl = ft_strlen(src);
	if (size <= dl)
		return (size + sl);
	ii = 0;
	while (src[ii] != '\0' && dl + 1 < size)
	{
		dest[dl] = src[ii];
		dl++;
		ii++;
	}
	dest[dl] = '\0';
	return (dl);
}
