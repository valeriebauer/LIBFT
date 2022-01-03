#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;
	temp = *alst;
	while (temp->next != NULL)
		temp = temp->next;
	temp-next = new;
	new->next = NULL;
}
