/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jimmy <jimmy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 18:42:24 by jimmy             #+#    #+#             */
/*   Updated: 2024/02/16 12:30:06 by jimmy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "psw.h"

void	free_stack(t_stack **stack)
{
	t_node	*node;

	if (!stack || !*stack)
		return ;
	while ((*stack)->node)
	{
		node = (*stack)->node->next;
		free((*stack)->node);
		(*stack)->node = node;
	}
	free(*stack);
}
