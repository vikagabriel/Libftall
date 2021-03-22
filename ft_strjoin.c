/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 16:55:48 by vgabriel          #+#    #+#             */
/*   Updated: 2021/03/22 17:03:27 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strcpy(char *dest, const char *src, size_t dest_index)
{
	size_t i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[dest_index] = src[i];
		++i;
		++dest_index;
	}
	return (dest);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	if ((join = malloc((len + 1) * sizeof(char))))
	{
		ft_strcpy(join, s1, 0);
		ft_strcpy(join, s2, ft_strlen(s1));
		join[len] = '\0';
		return (join);
	}
	return (NULL);
}
