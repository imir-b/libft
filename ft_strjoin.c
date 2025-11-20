/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:44:54 by vbleskin          #+#    #+#             */
/*   Updated: 2025/11/14 21:10:10 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
// #include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	int		size;
	int		i;
	int		j;

	str = NULL;
	i = ((j = 0));
	size = sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1);
	str = malloc(size);
	if (!str)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = ('\0');
	return (str);
}

// int	main(void)
// {
// 	char const *s1 = "lorem ipsum";
// 	char const *s2 = "dolor sit amet";

// 	char *str = ft_strjoin(s1, s2);
// 	printf("%s", str);
// }
