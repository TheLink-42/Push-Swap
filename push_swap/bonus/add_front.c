/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_front.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 23:24:57 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:29:27 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

void	add_front(t_stack **stack, t_node *new_node)
{
	t_node	*node;

	node = (*stack)->node;
	if (node)
	{
		new_node->next = node;
		node->prev = new_node;
	}
	(*stack)->node = new_node;
}
