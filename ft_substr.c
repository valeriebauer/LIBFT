#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (start--)	
		s++;
	//		start--;
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}

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
	} // faut-il ajouter le \0 ?
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	i;
	int	k;
	char	*ptr;

	i = 0;
	j = 0;
	k = 0;
	ptr = malloc(sizeof(char) * (ft_strlen(s1) + 1)); // est un max !? 
	if (ptr == NULL)
		return (NULL);
	while (s1)
	{
		while (set && (s1[i] != set[j]))
			j++;
		if !(set) //(set[j] =='\0')
		{
			ptr[k] = s1[i];
			k++;
			j = 0;
		}
		i++;
	} // faut-il ajouter le \0 ?
	return (ptr);
}


#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{
	char	*str;
	int	start;
//	unsized int	start;
	size_t	len;
      	
	str = "coucou";
	start = 3;
	len = 2;
	printf("str: %s | ft_substr: %s | start : %d | len : %ld", str, ft_substr(str, start, len), start, len);

	return (0);
}
