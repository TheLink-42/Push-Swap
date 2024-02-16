/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 13:19:19 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:29:46 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

static void	rotate(t_stack **stack)
{
	t_node	*node;
	t_node	*last;

	node = (*stack)->node;
	if (!node || !node->next)
		return ;
	last = get_last(stack);
	(*stack)->node = node->next;
	node->next->prev = NULL;
	node->next = NULL;
	last->next = node;
	node->prev = last;
}

void	do_checker_ra(t_stack **stack_a)
{
		rotate(stack_a);
}

void	do_checker_rb(t_stack **stack_b)
{
	rotate(stack_b);
}

void	do_checker_rr(t_stack **stack_a, t_stack **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
