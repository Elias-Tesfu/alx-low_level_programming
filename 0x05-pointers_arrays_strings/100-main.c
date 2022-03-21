#include "main.h"
#include <stdio.h>

int main(void)
{
	int nb;

	nb = _atoi("-4");
	printf("%d\n", nb);
	nb = _atoi("10");
	printf("%d\n", nb);
	nb = _atoi("99");
	printf("%d\n", nb);
	nb = _atoi("-40");
	printf("%d\n", nb);
	nb = _atoi(" ------+++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("Hello ----- world\n");
	printf("%d\n", nb);
	nb = _atoi("+++++ +-+ 2242454");
	printf("%d\n",nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	return (0);
}
