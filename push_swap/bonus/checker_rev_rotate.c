/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_rev_rotate.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 00:50:48 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:29:42 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

static void	rev_rotate(t_stack **stack)
{
	t_node	*node;
	t_node	*last;

	node = (*stack)->node;
	if (!node || !node->next)
		return ;
	last = get_last(stack);
	last->prev->next = NULL;
	last->prev = NULL;
	node->prev = last;
	last->next = node;
	(*stack)->node = last;
}

void	do_checker_rra(t_stack **stack_a)
{
	rev_rotate(stack_a);
}

void	do_checker_rrb(t_stack **stack_b)
{
	rev_rotate(stack_b);
}

void	do_checker_rrr(t_stack **stack_a, t_stack **stack_b)
{
	rev_rotate(stack_a);
	rev_rotate(stack_b);
	ft_printf("rrr\n");
}
