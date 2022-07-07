# include  < stdarg.h >
/* *
  *sum_them_all - renvoie la somme de tous ses paramètres.
  *@n : nombre d'arguments à additionner.
  *
  *Retour : somme ou 0.
  */
int  sum_them_all ( const  entier non signé  n , ...)
{
	 int non signé somme = 0 , je;
	va_list arglist ;

	si (n == 0 )
		retour ( 0 );

	va_start (arglist, n);

	pour (i = 0 ; i < n ; i++)
	{
		somme += va_arg (arglist, int );
	}
	va_end (arglist);

	retour (somme);
}
