#include "push_swap.h"

void		ss(t_stackdata *a, t_stackdata *b)
{
	swap(a);
	swap(b);
}

void		rr(t_stackdata *a, t_stackdata *b)
{
	rotate(a);
	rotate(b);
}

void		rrr(t_stackdata *a, t_stackdata *b)
{
	rrx(a);
	rrx(b);
}
