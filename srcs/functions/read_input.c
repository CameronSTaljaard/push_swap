#include <push_swap.h>
#include <libft.h>
#include <get_next_line.h>

void		read_input(t_stack *a, t_stack *b, char **line, char args)
{
	while (get_next_line(0, line))
	{
		if (checkline(*line))
		{
			do_op(*line, &a, &b, args);
			free (*line);
		}
		else if (!checkline(*line))
		{
			free(*line);
			free_stack(a);
			ERROR;
		}
		if (sorted(a) && !b)
		{
			free_stack(a);
			OK;
		}
	}
}