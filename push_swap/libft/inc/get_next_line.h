/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:57:16 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:44:13 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include "libft.h"

char	*custom_free(char **str);
char	*free_stored_line(char *str);
char	*ft_get_line(char *str);
char	*read_file(int fd, char *str);
char	*get_next_line(int fd);

char	*gnl_strjoin(char *s1, char *s2);
char	*gnl_substr(char *str, unsigned int start, size_t len);
char	*gnl_strchr(char *str, int c);

#endif
