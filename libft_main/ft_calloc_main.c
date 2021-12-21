
#include "../libft.h"

int main(void)
{
	char *a;
	// int i = 0;
	a = calloc(2, 0);
	printf("retour calloc Natif: pointeur %p et valeur %s\n", a, a);
	// while (i < 20)
	// { 
	// 	printf("Ft Native: %d\n", a[i]);
	// 	i++;
	// }

	char *b;
	b = ft_calloc(2, 0);
	// i = 0;
	printf("retour calloc a moa: pointeur %p et valeur %s\n", b, b);
	// while (i < 20)
	// { 
	// 	printf("Ft a moa: %d\n", b[i]);
	// 	i++;
	// }
}
