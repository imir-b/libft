/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 11:23:17 by vbleskin          #+#    #+#             */
/*   Updated: 2025/11/15 12:24:54 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
// #include <stdio.h>

static int	ft_countnb(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_revstr(char *src, int len)
{
	char	*dest;
	int		i;

	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	len -= 1;
	i = 0;
	while (len >= 0)
	{
		dest[i] = src[len];
		i++;
		len--;
	}
	dest[i] = '\0';
	free (src);
	return (dest);
}

static void	ft_update_nbr(char *nbr, int *i, int n)
{
	nbr[(*i)++] = (n % 10) + 48;
	if (n > 9)
		ft_update_nbr(nbr, i, n / 10);
}

static void	ft_strcpy(char *dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = ('\0');
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		neg;
	int		i;

	if (n == -2147483648)
	{
		nbr = malloc(12);
		if (!nbr)
			return (NULL);
		ft_strcpy(nbr, "-2147483648");
		return (nbr);
	}
	nbr = malloc(sizeof(char) * (ft_countnb(n) + 1));
	if (!nbr)
		return (NULL);
	i = ((neg = 0));
	if (n < 0)
	{
		neg = 1;
		n *= -1;
	}
	ft_update_nbr(nbr, &i, n);
	if (neg)
		nbr[i++] = '-';
	return (ft_revstr(nbr, i));
}

// int main(void)
// {
// 	char *str = ft_itoa(64);
// 	printf("%s", str);
// }