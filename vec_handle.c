#include "fdf.h"

static t_vector *make_new(t_point *i1, t_point *i2)
{
	t_vector *o;

	o = (t_vector *)malloc(sizeof(t_vector));
	o->begin = *i1;
	o->end = *i2;
	return (o);
}

t_vector **make_vec(t_point **in, int x, int z)
{
	int			i;
	int			c;
	t_vector	**o;

	c = 0;
	o = (t_vector **)malloc(sizeof(t_vector *) * ((x - 1) * z + (z - 1) * x) + sizeof(NULL));
	i = 0;
	while (in[i])
	{
		if (i % z == z - 1)
			i++;
		else
		{
			o[c] = make_new(in[i], in[i + 1]);
			i++;
			c++;
		}
	}
	i = 0;
	while (in[i])
	{
		if (i + z == x * z)
			break ;
		o[c] = make_new(in[i], in[i + z]);
		c++;
		i++;
	}
	o[c] = NULL;
	//i = 0;

	//while (o[i])
	//{
		//printf("VEC (%f, %f) -> (%f, %f)\n", o[i]->begin.x, o[i]->begin.y, o[i]->end.x, o[i]->end.y);
		//i++;
	//}
	return (o);
}
