/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 03:38:15 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:30:03 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

int	find_index(t_stack **stack, int index)
{
	t_node	*node;

	node = (*stack)->node;
	while (node)
	{
		if (node->index == index)
			return (1);
		node = node->next;
	}
	return (0);
}
