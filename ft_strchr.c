/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:54:19 by vgabriel          #+#    #+#             */
/*   Updated: 2021/03/12 16:56:21 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char symb;

	symb = (unsigned char)c;
	while (*s != '\0' && *s != symb)
		++s;
	if (*s == symb)
		return ((char*)s);
	return (NULL);
}
