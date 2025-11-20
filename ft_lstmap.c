/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vbleskin <vbleskin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:59:41 by vbleskin          #+#    #+#             */
/*   Updated: 2025/11/11 19:57:36 by vbleskin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// t_list	*ft_lstnew(void *content)
// {
// 	t_list	*newNode;

// 	newNode = malloc(sizeof(t_list));
// 	if (!newNode)
// 		return (NULL);
// 	newNode->content = content;
// 	newNode->next = NULL;
// 	return (newNode);
// }

// t_list	*ft_lstlast(t_list *lst)
// {
// 	while (lst->next)
// 		lst = lst->next;
// 	return (lst);
// }

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	ft_lstlast(*lst)->next = new;
// 	new->next = NULL;
// }

// void	ft_lstclear(t_list **lst, void (*del)(void *))
// {
// 	t_list	*tmp;

// 	while (*lst)
// 	{
// 		tmp = (*lst)->next;
// 		ft_lstdelone(*lst, del);
// 		*lst = tmp;
// 	}
// 	*lst = NULL;
// }

// void	ft_lstdelone(t_list *lst, void (*del)(void *))
// {
// 	del(lst->content);
// 	free(lst);
// }

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	void	*new_content;

	if (!lst)
		return (NULL);
	new_content = f(lst->content);
	new = ft_lstnew(new_content);
	lst = lst->next;
	while (lst)
	{
		new_content = f(lst->content);
		ft_lstadd_back(&new, ft_lstnew(new_content));
		if (!new->content)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new);
}

// static void ft_lstprint(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%s\n", (char *)lst->content);
// 		lst = lst->next;
// 	}
// }

// static void *ft_capitalize(void *content)
// {
// 	char *str = (char *)content;
// 	char *dup = strdup(str);
// 	int i = 0;

// 	if (!dup)
// 		return (NULL);
// 	while (dup[i])
// 	{
// 		if (dup[i] <= 'z' && dup[i] >= 'a')
// 			dup[i] -= 32;
// 		i++;
// 	}
// 	return ((void *)dup);
// }

// static void ft_del(void * content)
// {
// 	(void) content;
// }

// int	main(void)
// {
// 	t_list *myList = ft_lstnew("hello");
// 	ft_lstadd_back(&myList, ft_lstnew("world"));
// 	t_list *mapList = ft_lstmap(myList, ft_capitalize, ft_del);

// 	ft_lstprint(myList);
// 	ft_lstprint(mapList);

// 	return (0);
// }