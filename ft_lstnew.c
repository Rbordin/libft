/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbordin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 10:45:43 by rbordin           #+#    #+#             */
/*   Updated: 2023/01/30 14:55:27 by rbordin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
void print(t_list *new_node) 
{
    t_list *current_node = new_node;
   	while ( current_node != NULL) 
	{
        printf("%d ", current_node->content);
        current_node = current_node->next;
    }
}
int	main()
{
	print(ft_lstnew(548));
}
