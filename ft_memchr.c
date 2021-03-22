/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 15:40:41 by vgabriel          #+#    #+#             */
/*   Updated: 2021/03/17 16:40:15 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	symb;

	str = (unsigned char *)s;
	symb = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*str == symb)
			return (str);
		++str;
		++i;
	}
	return (NULL);
}
