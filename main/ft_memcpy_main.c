//*
//************ ft_main_memcpy
//*
int	main(void)
{
printf("void *ft_memcpy(void *dest, const void *src, size_t n)\n");

// AVEC UN TABLEAU DE CHAR mais bugg avec n > 8
//	printf("Avec un tableau de CAR\n");
//	char s1[]="desti";
//	char s2[]="source";
//	char s3[]="desti";
//	char s4[]="source";
//	char s1[]={'a',' ',')'};
//	char s2[]={'a',' ',')'};
//	size_t n = 3 * sizeof(char);
//	printf("Ft Native: %s\n", (char *)memcpy(s1 + 2, s1, n)); // pour simuler le chevauchement
//	printf("Ma Ft    : %s\n", (char *)ft_memcpy(s3 + 2, s3, n));
//	printf("Ft Native: %s\n", (char *)memcpy(s1, s2, n));
//otre nom, prénom, identifiant Pôle Emploi (complet, merci de bien vérifier) et localité de votre agence	printf("Ma Ft    : %s\n", (char *)ft_memcpy(s3, s4, n));
//	printf("Ft Native: %s\n", (char *)memcpy(s1 + 2, s1, n));
//	printf("Ma Ft    : %s\n", (char *)ft_memcpy(s3 + 2, s3, n));
//	ft_memmove(s3 + 2, s3, n);
//	printf("Ma ft    : %s\n", s3);

//	printf("Avec un tableau d INT\n");

// AVEC UN TABLEAU D INT 
// RESULTAT : les 4 elts du tableau DEST sont remplaces par ceux de SRC alors que n = 2 ???
	int s1[4]={1,78,-244,0};
	int s2[4]={99,3,243,66};
	size_t i = 0; 
	size_t m = 2 * sizeof(int); // ou passer directement 8 en param car 1 int = 4 octets
	//size_t m = 8;
	(int *)memcpy(s1, s2, m);// remplace 1er elt du tableau par 808464432	(et non 0)
	while (i < 4)
	{ 
		printf("Ft Native: %d\n", s1[i]);
		i++;
	}
	int s3[4]={1,78,-244,0};
	int s4[4]={99,3,243,66};
	(int *)ft_memcpy(s3, s4, m);// 20 = 1 CAR non imprimable, affiche 336860180  
	i = 0; 
	while (i < 4)
	{ 
		printf("Ma Ft: %d\n", s3[i]);
		i++;
	}
	return (0);
}
