/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:31:57 by vbleskin          #+#    #+#             */
/*   Updated: 2025/11/15 11:55:32 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	if (src >= dest)
	{
		while (i < n)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			i--;
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
		}
	}
	return (dest);
}

// int main (void)
// {
// 	char s1[12] = "Hello World";
// 	char s2[12] = "Hello World";
// 	char d1[20];
// 	char d2[20];
// 	memmove(d1, s1, sizeof(char)*5);
// 	ft_memmove(d2, s2, sizeof(char)*5);
// 	printf("\nSOURCE\nmemmove : %s\nft_memmove : %s\n", s1, s2);
// 	printf("\nDEST\nmemmove : %s\nft_memmove : %s\n", d1, d2);
// }