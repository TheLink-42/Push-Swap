/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:53:48 by jbaeza-c          #+#    #+#             */
/*   Updated: 2024/02/16 12:42:17 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	int					i;

	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		i = (int)n;
		while (--i >= 0)
			*(char *)(dst + i) = *(char *)(src + i);
	}
	else
	{
		i = -1;
		while (++i < (int)n)
			*(char *)(dst + i) = *(char *)(src + i);
	}
	return (dst);
}
