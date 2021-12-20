#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

int main(void)
{

//*
//**************** itoa
//
	printf("char    *ft_itoa(int n);\n");
int n;

n = -1234;
//n = -2147483648;
printf("n: %s\n", ft_itoa(n));

//*
//**************** split
//*
	//printf("char    **ft_split(char const *s, char c)\n");

	//char	**s2;
	//char	c; 	
	//int	i;
	//// char s[] = "tout++va++bien++++++dans+le+meilleur+++++des+mondes";
	//char s[] = "+++tou++va+";
	////char	s2[3][4] = {{"tout"}, {"va"}, {"bien"}};
	//c = '+';
	
	//s2 = ft_split(s, c);
	
	//i = 0;
	////printf("s:  %s | c: %c | ft_split: %s ", s, c, s2[i]);
	//while (s2[i])
	//{
	//	printf("tab[%d] %s\n", i, s2[i]);
	//	i++;
	//}
	//free (*s2);

//*
//**************** split
//*
	// printf("char    **ft_split(char const *s, char c)\n");

	// //char	*s;
	// char	c; 	

	// char s[] = "tout++va++bien++++++dans+le+meilleur+++++des+mondes";
	// c = '+';
	// //printf("s:  %s | c: %s | ft_split: %s ", s, c, ft_split(s, c));
	// ft_split(s, c);

//*
//**************** strtrim 
//*
	// printf("char	*ft_strtrim(char const *s1, char const *set)\n");
	// char	*s1;
	// char	*set; 	
	// s1 = "oucoucouklkkksou";
	// set = "ou";

	// char	s1[] = "oucoucou";
	// char	set[] = "ou";
	// printf("s1:  %s | set: %s | ft_strtrim: %s ", s1, set, ft_strtrim(s1, set));

	// // war-machine - test KO - 
	// char	*s1;
	// char	*set;
	// s1 = "lorem ipsum dolor sit amet";
	// set = "te";
	// printf("s1:  %s | set: %s | ft_strtrim: %s ", s1, set, ft_strtrim(s1, set));

	// char	*s1;
	// char	*set;
	// s1 = "lorem ipsum dolor sit amet";
	// set = "l";
	// printf("s1:  %s | set: %s | ft_strtrim: %s ", s1, set, ft_strtrim(s1, set));

	// char	*s1;
	// char	*set;
	// s1 = "lorem ipsum dolor sit amet";
	// set = "tel";
	// printf("s1:  %s | set: %s | ft_strtrim: %s ", s1, set, ft_strtrim(s1, set));

	// char	*s1;
	// char	*set;
	// s1 = "          ";
	// set = " ";
	// printf("s1:  %s | set: %s | ft_strtrim: %s ", s1, set, ft_strtrim(s1, set));

//*
//**************** strjoin
//*
	// printf("char    *ft_strjoin(char const *s1, char const *s2)\n");
	// char	*s1;
	// char	*s2;
      	
	// s1 = "oucoucou";
	// s2 = "kkkk";
	// // char	s1[] = "oucoucou";
	// // char	set[] = "ou";

	// 	printf("s1:  %s | s2: %s | ft_strjoin: %s ", s1, s2, ft_strjoin(s1, s2));

//*
// //**************** substr 
//*
// 	printf("char	*ft_substr(char const *s, unsigned int start, size_t len)\n");
// 	char	*str;
// 	int	start;
// 	size_t	len;
      	
// 	// str = "coucou";
// 	// start = 3;
// 	// len = 2;
// 	// printf("str:  %s | start : %d | len : %ld | ft_substr: %s ", str, start, len,>>>
// 	//  ft_substr(str, start, len));

// // war-machine
// 	str = "lorem ipsum dolor sit amet";
// 	start = 400;
// 	len = 20;
// 	printf("str:  %s | start : %d | len : %ld | ft_substr: %s ", str, start, len,>>>
// 	 ft_substr(str, start, len));

	return (0);
}
