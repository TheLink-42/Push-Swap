/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:13:07 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:44:07 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft.h"

typedef struct s_print
{
	va_list	args;
	int		width;
	int		len;
	int		count;
}	t_print;

typedef struct s_strat
{
	void	(*execute)(t_print *tab, int fd);
}	t_strat;

void	print_char(t_print *tab, int fd);
void	print_decimal(t_print *tab, int fd);
void	print_hexalow(t_print *tab, int fd);
void	print_hexaup(t_print *tab, int fd);
void	print_integer(t_print *tab, int fd);
void	print_octal(t_print *tab, int fd);
void	print_perc(t_print *tab, int fd);
void	print_ptr(t_print *tab, int fd);
void	print_string(t_print *tab, int fd);

int		ft_printf(const char *format, ...);

#endif
