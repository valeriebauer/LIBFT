#include "libft.h"

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

	i_beg = 0;
	i_end = 0;
	len = 0;
	i_beg = ft_start_substr(s1, set);
	i_end = ft_end_substr(s1, set);
	len = (i_end - i_beg) + 1;
		
	return (ft_substr(s1, i_beg, len));
}
