/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:31:34 by vbleskin          #+#    #+#             */
/*   Updated: 2025/11/15 11:57:41 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <string.h>
// #include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = *(char *)(src + i);
		i++;
	}
	return (dest);
}

// int main (void)
// {
// 	char s1[20] = "Hello World";
// 	char s2[20] = "Hello World";
// 	char d1[20];
// 	char d2[20];
// 	memcpy(d1, s1, sizeof(char)*10);
// 	ft_memcpy(d2, s2, sizeof(char)*10);
// 	printf("\nSOURCE\nmemcpy : %s\nft_memcpy : %s\n", s1, s2);
// 	printf("\nDEST\nmemcpy : %s\nft_memcpy : %s\n", d1, d2);
// }