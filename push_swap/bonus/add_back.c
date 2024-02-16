/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_back.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:19:42 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:29:22 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

int	add_back(t_stack **stack, t_node *new_node)
{
	t_node	*node;
	t_node	*aux;

	node = (*stack)->node;
	if (!node)
	{
		(*stack)->node = new_node;
		(*stack)->size++;
		return (0);
	}
	if (node && !node->next && node->value == new_node->value)
	{
		free(new_node);
		return (-1);
	}
	while (node)
	{
		if (node->value == new_node->value)
		{
			free(new_node);
			return (-1);
		}
		aux = node;
		node = node->next;
	}
	aux->next = new_node;
	new_node->prev = aux;
	(*stack)->size++;
	return (0);
}
