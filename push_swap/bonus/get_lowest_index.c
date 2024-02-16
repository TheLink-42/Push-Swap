/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_lowest_index.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 04:54:16 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:30:24 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

int	get_lowest_index(t_stack **stack)
{
	int		index;
	t_node	*node;

	index = 99999;
	node = (*stack)->node;
	while (node)
	{
		if (node->index < index)
			index = node->index;
		node = node->next;
	}
	return (index);
}
