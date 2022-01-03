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
#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	new->next = *alst;
	*alst = new;
}
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
//	while (lst != NULL) ??
	while (lst-next != NULL)
		lst = lst->next;
	return (lst);
}
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*element;
	element = malloc(sizeof(*element));
	if (element == NULL)
		return (NULL);
	element->content = content;
	element->next = NULL;
	return element;
}
#include "libft.h"

int ft_size(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst);
	free(lst->content); // Peut_on Free 1 seul champ d 1 elemt ?
}

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *));
{
	t_list *temp; // necessite de passer par un element temporaire ?

	temp = *lst,
	while (temp != NULL)
	{
		del(temp);
		free(temp); // si je Free l instruction suivante est possible ?
		temp = temp->next;
	}
	free(temp);
}

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *));
{
	if ((lst == NULL) || (f == NULL))
		return ;
	while (lst != NULL)
	{
		f(lst->content); // ou lst seulement ...?
		lst = lst->next;
	}
}

void	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	if ((lst == NULL) || (f == NULL))
		return ;

	// faut-il creer une nouvelle liste résultante de la 1ere modifiee ?
	// del(lst); // qd supprimer l'element courant ? (ou toute la liste = :(
	// t_list	*element; // creation d 1 element
	// element = malloc(sizeof(*element));
	// if (element == NULL)
	//	return (NULL);
	while (lst != NULL)
	{
		f(lst->content); // ou lst seulement ...?
		lst = lst->next;
	}
	return element;
}
