/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:39:11 by vbleskin          #+#    #+#             */
/*   Updated: 2025/11/12 19:23:55 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <limits.h>

void	*ft_calloc(size_t nmemb, size_t s)
{
	void	*buffer;
	size_t	size;

	if (s != 0 && nmemb > __SIZE_MAX__ / s)
		return (NULL);
	size = s * nmemb;
	buffer = malloc(size);
	if (!buffer)
		return (NULL);
	ft_bzero(buffer, size);
	return (buffer);
}
