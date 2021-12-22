#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
//#include <string.h>
//#include <ctype.h>

int main(void)
{
//*
//**************** putchar_fd
//
	printf("void	ft_putchar_fd(char c, int fd);\n");
int n;

printf("n: %c  putchar_fd: \n", ft_putchar_fd('j', n));

//*
//**************** itoa
//
	printf("char    *ft_itoa(int n);\n");
int n;

n = -10;
//n = -2147483648LL;
// n = 1234;
//n = -2147483648;
printf("n: %s\n", ft_itoa(n));

//*
//**************** split
//*
	// printf("char    **ft_split(char const *s, char c)\n");

	// char	**s2;
	// char	c; 	
	// int	i;
	// // char s[] = "tout++va++bien++++++dans+le+meilleur+++++des+mondes";
	// //char s[] = "++ +to u++va+";
	// //c = '+';
	// //char s[] = "ccc";
	// //c = 'c';
	/*
	char s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. \
	Suspendisse";
	c = ' ';
	char s[] = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. \
	Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. \
	Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, \
	euismod non, mi.";
	*/
	// c = 'i';
		
	// s2 = ft_split(s, c);
	
	// i = 0;
	// //printf("s:  %s | c: %c | ft_split: %s ", s, c, s2[i]);
	// while (s2[i])
	// {
	// 	printf("\nmain ******** tab[%d] %s\n", i, s2[i]);
	// 	i++;
	// }
	// 		printf("main ******** tab[%d] %s\n", i, s2[i]);

//*
//**************** split
//*
	// printf("char    **ft_split(char const *s, char c)\n");

	// //char	*s;
	// char	c; 	

	// char s[] = "+tout++va++bien++ ++++dans+le+meilleur+++++des+mondes+";
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
