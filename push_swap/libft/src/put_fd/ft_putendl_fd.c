/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 12:53:26 by jbaeza-c          #+#    #+#             */
/*   Updated: 2024/02/16 12:42:33 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	char	*aux;

	aux = s;
	while (*aux)
	{
		ft_putchar_fd(*aux, fd);
		aux++;
	}
	ft_putchar_fd('\n', fd);
}
