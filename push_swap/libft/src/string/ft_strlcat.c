/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:49:19 by jbaeza-c          #+#    #+#             */
/*   Updated: 2024/02/16 12:43:16 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (size > 0)
	{
		while (i < size && dst[i])
			i++;
		while (src[j] && i + j < (size - 1))
		{
			dst[i + j] = src[j];
			j++;
		}
		if (i + j < size)
			dst[i + j] = '\0';
	}
	while (src[j])
		j++;
	return (i + j);
}
