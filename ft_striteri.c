/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 18:09:08 by vbleskin          #+#    #+#             */
/*   Updated: 2025/11/06 23:16:48 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

// void capitalize(unsigned int n, char *c)
// {
// 	if (*c >= 97 && *c <= 122)
// 		*c -= 32;
// }
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// int main(void)
// {
// 	char str[] = "Hello World";
// 	ft_striteri(str, capitalize);
// 	printf("%s", str);
// 	return (0);
// }