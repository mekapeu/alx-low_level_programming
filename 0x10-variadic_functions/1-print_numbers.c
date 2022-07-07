

# inclure  < stdio.h >
# inclure  < stdarg.h >
# inclure  < stdlib.h >
/* *
  *print_numbers - imprime les nombres suivis d'une nouvelle ligne.
  *@separator : chaîne à imprimer entre les nombres.
  *@n : nombre d'entiers passés à la fonction.
  *
  *Retour : nul.
  */
void  print_numbers ( const  char *separator, const  unsigned  int n, ...)
{
	entier non signé  i ;
	va_list numéros ;

	va_start (nombres, n);

	pour (i = 0 ; i < n ; i++)
	{
		printf ( " %d " , va_arg (nombres, int ));
		if (i < n - 1 && séparateur != NULL )
			printf ( " %s " , séparateur);
	}
	printf ( " \n " );

	va_end (nombres);
}
