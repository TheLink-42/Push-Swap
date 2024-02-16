/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jbaeza-c@student.42madrid.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 03:38:15 by jimmy             #+#    #+#             */
/*   Updated: 2023/10/04 03:40:01 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./../../includes/psw.h"

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
