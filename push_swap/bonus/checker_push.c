/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:10:36 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:29:35 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

static void	push(t_stack **dst, t_stack **src)
{
	t_node	*node;

	node = (*src)->node;
	if (!node)
		return ;
	if (node && !node->next)
	{
		(*src)->node = NULL;
		add_front(dst, node);
	}
	else
	{
		node->next->prev = NULL;
		(*src)->node = node->next;
		node->next = NULL;
		add_front(dst, node);
	}
}

void	do_checker_pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	(*stack_a)->size++;
	(*stack_b)->size--;
}

void	do_checker_pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	(*stack_a)->size--;
	(*stack_b)->size++;
}
