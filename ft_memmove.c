/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 14:07:30 by vgabriel          #+#    #+#             */
/*   Updated: 2021/01/23 16:20:22 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	save_s[ft_strlen(src)];
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	*save;
	size_t			i;

	save = save_s;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	i = 0;
	if (d == NULL && s == NULL)
		return (NULL);
	while (i < len)
	{
		save[i] = s[i];
		++i;
	}
	i = 0;
	while (len > 0)
	{
		d[i] = save[i];
		++i;
		--len;
	}
	return (dst);
}
