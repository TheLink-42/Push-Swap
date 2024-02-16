/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_highest_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 03:40:14 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:30:17 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

int	get_highest_index(t_stack **stack)
{
	int		index;
	t_node	*node;

	index = 0;
	node = (*stack)->node;
	while (node)
	{
		if (node->index > index)
			index = node->index;
		node = node->next;
	}
	return (index);
}
