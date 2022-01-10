#include "libft.h"
#include <bsd/string.h>

int main(void)
{
char src[] ="hello world";
char dst[]= "you";
printf("%ld\n", strlcat(dst, src, 50));
printf("%s\n", dst);

char src2[] ="hello world";
char dst2[]= "you";
printf("%ld\n", ft_strlcat(dst2, src2, 50));
printf("%s\n", dst2);
return (0);
}
