/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:31:07 by vbleskin          #+#    #+#             */
/*   Updated: 2025/11/12 19:13:17 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <strings.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// int main (void) {
// 	int i;
// 	char str[20] = "Hello World";
// 	char str1[20] = "Hello World";
// 	ft_bzero(str, 5);
// 	bzero(str1, 5);
// 	for (i = 0; i < 11; i++)
//     	printf("%c", str[i] ? str[i] : '.');
// 	printf("\n");
// 	for (i = 0; i < 11; i++)
//     	printf("%c", str1[i] ? str1[i] : '.');
// }
