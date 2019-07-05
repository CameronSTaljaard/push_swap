#include <libft.h>
#include <push_swap.h>

int		stack_size(t_stack *a)
{
	t_stack *tmp;
	size_t	i;

	tmp = a;
	i = 0;
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

t_stack	*push_in_list(t_stack *list, int num)
{
	t_stack	*tmp;

	if ((tmp = malloc(sizeof(t_stack))) == NULL)
		return (NULL);
	tmp->number = num;
	tmp->previous = NULL;
	tmp->next = list;
	return (tmp);
}

void push(t_stack **head_ref, int new_data) 
{ 
    /* 1. allocate node */
    t_stack *new_node = (t_stack*)malloc(sizeof(t_stack)); 
  
    /* 2. put in the data  */
    new_node->number = new_data; 
  
    /* 3. Make next of new node as head and previous as NULL */
    new_node->next = (*head_ref); 
    new_node->previous = NULL; 
  
    /* 4. change prev of head node to new node */
    if (*head_ref)
        (*head_ref)->previous = new_node; 
  
    /* 5. move the head to point to the new node */
    (*head_ref) = new_node; 
}
