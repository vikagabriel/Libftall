/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/19 14:30:47 by vgabriel          #+#    #+#             */
/*   Updated: 2021/01/19 15:13:38 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *start;
	unsigned char symb;

	start = (unsigned char *)b;
	symb = (unsigned char)c;
	while (len != 0)
	{
		*start = symb;
		++start;
		--len;
	}
	return (b);
}
