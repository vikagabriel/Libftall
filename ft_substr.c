/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 14:25:54 by vgabriel          #+#    #+#             */
/*   Updated: 2021/03/16 14:29:56 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if ((substr = malloc((len + 1) * sizeof(char))))
	{
		i = 0;
		while (s[start] != '\0' && i < len)
		{
			substr[i] = s[start];
			++i;
			++start;
		}
		substr[i] = '\0';
		return (substr);
	}
	return (NULL);
}
