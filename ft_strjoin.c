#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int	i;
	char	*ptr;

	i = 0;
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1)); 
	if (ptr == NULL)
		return (NULL);
	ptr = s1;
	while (ptr)
		ptr++;
	while (s2)
	{
		ptr[i] = s2[i];
		i++;
	} 
	ptr[i] = '\0';
	return (ptr);
}
