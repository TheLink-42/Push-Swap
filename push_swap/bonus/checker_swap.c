/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_swap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 12:01:31 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:29:53 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

static void	small_swap(t_node *node, t_node *aux)
{
	node->prev = aux;
	aux->next = node;
	node->next = NULL;
	aux->prev = NULL;
}

static void	swap(t_stack **stack)
{
	t_node	*node;
	t_node	*aux;

	node = (*stack)->node;
	if (!node || !node->next)
		return ;
	aux = node->next;
	if (!aux->next)
	{
		small_swap(node, aux);
		(*stack)->node = aux;
		return ;
	}
	aux->next->prev = node;
	node->next = aux->next;
	aux->next = node;
	node->prev = aux;
	aux->prev = NULL;
	(*stack)->node = aux;
}

void	do_checker_sa(t_stack **stack_a)
{
	swap(stack_a);
}

void	do_checker_sb(t_stack **stack_b)
{
	swap(stack_b);
}

void	do_checker_ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
}
