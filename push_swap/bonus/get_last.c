/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_last.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:43:07 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:30:20 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

t_node	*get_last(t_stack **stack)
{
	t_node	*node;

	node = (*stack)->node;
	if (!node)
		return (NULL);
	while (node->next)
		node = node->next;
	return (node);
}
