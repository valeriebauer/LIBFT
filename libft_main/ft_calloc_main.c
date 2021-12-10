
#include "../libft.h"

int main(void)
{
	char *a;
	// int i = 0;
	a = calloc(2, 2);
	printf("retour calloc Natif : %p et : %s\n", a, a);
	// while (i < 20)
	// { 
	// 	printf("Ft Native: %d\n", a[i]);
	// 	i++;
	// }

	char *b;
	b = ft_calloc(2, 2);
	// i = 0;
	printf("retour calloc a moa : %p et : %s\n", b, b);
	// while (i < 20)
	// { 
	// 	printf("Ft a moa: %d\n", b[i]);
	// 	i++;
	// }
}