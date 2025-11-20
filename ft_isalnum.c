/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:27:21 by vbleskin          #+#    #+#             */
/*   Updated: 2025/11/12 17:25:11 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// static int	ft_isdigit(char c)
// {
// 	if (c >= 48 && c <= 57)
// 		return (2048);
// 	else
// 		return (0);
// }

// static int	ft_isalpha(char c)
// {
// 	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
// 		return (1024);
// 	else
// 		return (0);
// }

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (8);
	else
		return (0);
}
