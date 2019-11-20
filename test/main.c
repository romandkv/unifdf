#include "../includes/fdf.h"
#include "test.h"

int	main()
{
	if (test_parser())
		printf("TEST test_parser OK :)\n");
	else
		printf("TEST test_parser KO :(\n");
}
