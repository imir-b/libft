/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 16:40:37 by vblescin          #+#    #+#             */
/*   Updated: 2025/11/14 21:32:05 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
// #include <stdio.h>

static int	ft_countwords(char const *str, char sep)
{
	int	i;
	int	nb;
	int	newword;

	i = ((nb = (newword = 0)));
	while (str[i])
	{
		if (str[i] != sep && !newword)
		{
			nb++;
			while (str[i] && str[i] != sep)
				i++;
			newword = 1;
		}
		if (str[i] == sep)
		{
			newword = 0;
			while (str[i] && str[i] == sep)
				i++;
		}
	}
	return (nb);
}

static int	ft_wordlen(char const *src, char sep)
{
	int	len;

	len = 0;
	while (*src != sep && *src)
	{
		len++;
		src++;
	}
	return (len);
}

static int	ft_ignore_sep(const char **src, char sep)
{
	while (**src == sep && **src)
		(*src)++;
	return (**src != '\0');
}

static int	ft_alloc(void **str, int size, int count)
{		
	*str = malloc(count * size);
	if (!*str)
		return (0);
	return (1);
}

char	**ft_split(char const *src, char s)
{
	char	**dest;
	int		word;
	int		start;
	int		end;

	if (!ft_alloc((void **)&dest, (ft_countwords(src, s) + 1), sizeof(char *)))
		return (NULL);
	word = ((start = (end = 0)));
	while (*src)
	{
		if (!ft_ignore_sep(&src, s))
			break ;
		end = ft_wordlen(src, s);
		while (start < end)
		{
			if (start == 0)
				if (!ft_alloc((void **)&dest[word], end + 1, sizeof(char)))
					return (NULL);
			dest[word][start++] = *src++;
		}
		dest[word++][start] = '\0';
		start = 0;
	}
	dest[word] = (NULL);
	return (dest);
}

// int	main(void)
// {
// 	char	*src = "";
// 	char	sep = ' ';
// 	char	**str = ft_split(src, sep);
// 	int		i = 0;

// 	printf("SOURCE : %s\n", src);
// 	printf("SEPARATEUR : '%c'\n", sep);
// 	printf("DEST :\n");
// 	while (str[i])
// 	{
// 		printf("%d : %s\n", i, str[i]);
// 		i++;
// 	}
// 	free(str);
// 	return (0);
// }
