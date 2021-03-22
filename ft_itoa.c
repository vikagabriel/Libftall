/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgabriel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/22 15:18:01 by vgabriel          #+#    #+#             */
/*   Updated: 2021/03/22 16:43:31 by vgabriel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	num_len(int n)
{
	int len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n = -n;
		++len;
	}
	while (n > 0)
	{
		n /= 10;
		++len;
	}
	return (len);
}

static int	is_edge_case(int n, void *str)
{
	char	*numstr;
	char	*edge_case;
	int		i;

	numstr = (char *)str;
	if (n == -2147483648)
	{
		i = 0;
		edge_case = "-2147483648";
		while (i < 12)
		{
			numstr[i] = edge_case[i];
			++i;
		}
		return (1);
	}
	else if (n == 0)
	{
		numstr[0] = '0';
		numstr[1] = '\0';
		return (1);
	}
	return (0);
}

char		*ft_itoa(int n)
{
	char	*numstr;
	int		len;
	int		i;

	len = num_len(n);
	numstr = malloc(sizeof(char) * len + 1);
	if (numstr == NULL)
		return (NULL);
	if (is_edge_case(n, numstr) == 1)
		return (numstr);
	i = 0;
	if (n < 0)
	{
		n = -n;
		numstr[0] = '-';
		++i;
	}
	numstr[len] = '\0';
	while (len - 1 >= i)
	{
		numstr[len - 1] = (n % 10) + '0';
		--len;
		n /= 10;
	}
	return (numstr);
}
