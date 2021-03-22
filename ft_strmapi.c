/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 14:22:52 by vgabriel          #+#    #+#             */
/*   Updated: 2021/03/22 16:47:12 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (!s || !f)
		return (NULL);
	if ((new_str = malloc(sizeof(char) * ft_strlen(s))))
	{
		i = 0;
		while (s[i] != '\0')
		{
			new_str[i] = f(i, s[i]);
			++i;
		}
		new_str[i] = '\0';
		return (new_str);
	}
	return (NULL);
}
