/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 17:01:06 by vgabriel          #+#    #+#             */
/*   Updated: 2021/03/12 17:02:42 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	symb;
	char			*fin_s;

	fin_s = NULL;
	symb = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == symb)
			fin_s = (char*)s;
		++s;
	}
	if (*s == symb)
		return ((char*)s);
	return (fin_s);
}
