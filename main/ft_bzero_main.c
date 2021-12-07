//*
//************ ft_main_bzero
//*
int	main(void)
{
// declaration NOK = segment fault !!?
//	char *a;
//	a = "valerie";
//	printf("%s\n", a);
//	bzero(a, 5, 3);

// AVEC UN TABLEAU DE CHAR mais bugg avec n > 8
	printf("Avec un tableau de CAR\n");
	char bzero_s1[]="valerie";
	char bzero_s2[]="valerie";
//	char bzero_s1[]={'a',' ',')'};
//	char bzero_s2[]={'a',' ',')'};
	size_t n = 3 * sizeof(char); 
	bzero(bzero_s1, n); 
	printf("Ft Native: %s\n", bzero_s1); 	
	ft_bzero(bzero_s2, n);
	printf("Ma ft    : %s\n", bzero_s2);

	printf("\n");
	printf("Avec un tableau d INT\n");

// AVEC UN TABLEAU D INT 
	int bzero_s3[4]={1,78,-244,0};
	int bzero_s4[4]={1,78,-244,0};
	size_t i = 0; 
	size_t m = 2 * sizeof(int); 
	bzero(bzero_s3, m);
	while (i < 4)
	{ 
		printf("Ft Native: %d\n", bzero_s3[i]);
		i++;
	}
	ft_bzero(bzero_s4, m);
	i = 0; 
	while (i < 4)
	{ 
		printf("Ma Ft: %d\n", bzero_s4[i]);
		i++;
	}

//	*** stack smashing detected ***:
//	bzero( s, '1', 9);
//	printf("%s", s);
//	Ne compile pas du fait d incompatibilite entre %s et type void* de la fct:

	return (0);

}
