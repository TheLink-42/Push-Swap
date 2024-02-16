/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:00:27 by jbaeza-c          #+#    #+#             */
/*   Updated: 2024/02/16 12:42:41 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_putptr(unsigned long ptr)
{
	char	*address_str;
	size_t	address;
	size_t	i;
	int		nibble;

	address_str = ft_strdup("0000000000000000");
	address = (size_t)ptr;
	i = 0;
	while (i < sizeof(void *) * 2)
	{
		nibble = (address >> (4 * (sizeof(void *) * 2 - 1 - i))) & 0xf;
		if (nibble < 10)
			address_str[i] = '0' + nibble;
		else
			address_str[i] = 'a' + nibble - 10;
		i++;
	}
	return (address_str);
}
