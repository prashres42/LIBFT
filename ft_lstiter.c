/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prashres <prashres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 21:32:05 by prashres          #+#    #+#             */
/*   Updated: 2026/05/11 14:38:24 by prashres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current_one;

	current_one = lst;
	while (current_one)
	{
		f(current_one);
		current_one = current_one->next;
	}
}
// void funcao(void *content)
// {
// 	t_list *new;
// 	new->content = content;
// 	free(new);
// }