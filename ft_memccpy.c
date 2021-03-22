/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 16:10:59 by vgabriel          #+#    #+#             */
/*   Updated: 2021/03/22 17:26:12 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	symb;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	symb = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		*d = s[i];
		++d;
		if (s[i] == symb)
			return (d);
		++i;
	}
	return (NULL);
}
