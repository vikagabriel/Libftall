/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 16:57:51 by vgabriel          #+#    #+#             */
/*   Updated: 2021/03/17 17:23:13 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t needle_len;

	if (!*needle)
		return ((char *)haystack);
	needle_len = ft_strlen(needle);
	while (*haystack && needle_len < len)
	{
		if (*haystack == *needle)
		{
			if (ft_strncmp(needle, haystack, needle_len) == 0)
				return ((char *)haystack);
		}
		--len;
		++haystack;
	}
	return (NULL);
}
