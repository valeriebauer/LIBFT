#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

static int	ft_start_substr(char const *s1, char const *set)
{
	int i;

	i = 0;
	while ((s1[i] && set[i]) && (s1[i] == set[i]))
		i++;
	return (i);
}

static int	ft_end_substr(char const *s1, char const *set)
{
	int i;
	int j;

	i = ((int)ft_strlen(s1) - 1);
	j = ((int)ft_strlen(set) - 1);
	while ((i >= 0 && j >= 0) && (s1[i] == set[j]))
	{
		i--;
		j--;
	}
	return(i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i_beg;
	int	i_end;
	int	len;
	//char	*s2;

	i_beg = 0;
	i_end = 0;
	len = 0;
	i_beg = ft_start_substr(s1, set);
	i_end = ft_end_substr(s1, set);
	len = (i_end - i_beg) + 1;
	// if (set[0])
	// 	s2 = malloc(sizeof(char) * len);
	// else
	// 	s2 = malloc(sizeof(char) * ((int)ft_strlen(s1) + 1));		
	// if (!s2)
	// 	return (NULL);
		
	return (ft_substr(s1, i_beg, len));
}

int main(void)
{
//*
// //**************** substr 
//*
// printf("char	*ft_substr(char const *s, unsigned int start, size_t len)\n");
// 	char	*str;
// 	int	start;
// //	unsized int	start;
// 	size_t	len;
      	
// 	str = "coucou";
// 	start = 3;
// 	len = 2;
// 	printf("str:  %s | start : %d | len : %ld | ft_substr: %s ", str, start, len, ft_substr(str, start, len));

//*
//**************** strtrim 
//*
	printf("char	*ft_strtrim(char const *s1, char const *set)\n");
	char	*s1;
	char	*set;
      	
	s1 = "oucoucouklkkksou";
	set = "ou";
	// char	s1[] = "oucoucou";
	// char	set[] = "ou";

		printf("s1:  %s | set: %s | ft_strtrim: %s ", s1, set, ft_strtrim(s1, set));

	return (0);
}
