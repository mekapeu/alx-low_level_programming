# inclure  < stdio.h >
# inclure  < stdlib.h >
# inclure  < stdarg.h >

/* *
  *print_all - imprime n'importe quoi.
  *@format : liste de tous les arguments passés à la fonction.
  *
  *Retour : nul.
  */
void  print_all ( char const  * format const , ...)
{
	entier non signé  i ;
	arguments va_list ;
	caractère *s, *séparateur ;

	va_start (arguments, format);

	séparateur = " " ;

	je = 0 ;
	tandis que (format && format[i])
	{
		basculer (format[i])
		{
			cas  ' c ' :
				printf ( " %s%c " , séparateur,   va_arg (args, int ));
				casser ;
			cas  ' je ' :
				printf ( " %s%d " , séparateur, va_arg (args, int ));
				casser ;
			cas  ' f ' :
				printf ( " %s%f " , séparateur, va_arg (args, double ));
				casser ;
			cas  ' s ' :
				s = va_arg (args, char *);
				si (s == NULL )
					s = " (néant) " ;
				printf ( " %s%s " , séparateur, s);
				casser ;
			par défaut :
				je++ ;
				continuer ;
		}
		séparateur = " , " ;
		je++ ;
	}

	printf ( " \n " );
	va_end (arguments);
}
