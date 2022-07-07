# inclure  < stdio.h >
# inclure  < stdarg.h >
# inclure  < stdlib.h >
/* *
  *print_strings - imprime les chaînes suivies d'une nouvelle ligne.
  *@separator : chaîne à imprimer entre les chaînes.
  *@n : nombre de chaînes.
  *
  *Retour : nul.
  */
void  print_strings ( const  char *separator, const  unsigned  int n, ...)
{
	entier non signé  i ;
	caractère *s ;
	chaînes va_list ;

	si (séparateur == NULL )
		séparateur = " " ;

	va_start (chaînes, n);

	pour (i = 0 ; i < n ; i++)
	{
		s = va_arg (chaînes, char *);

		si (s == NULL )
			s = " (néant) " ;
		printf ( " %s " , s);
		si (i < n - 1 )
		{
			printf ( " %s " , séparateur);
		}
	}
	printf ( " \n " );
	va_end (chaînes);
}
