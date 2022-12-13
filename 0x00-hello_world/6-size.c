#include<std.io>
/**
 * main	-	runs	data	type
 *
 * Return:	Always	0(success)
 */

int	main(void)
{
	char	q;
	int	w;
	long	int	e;
	long	long	int	r;
	float	f;

	printf("size	of	a	char:	%Lu	byte(s)\n",	(unsigned	long)sizeof(q));
	printf("size	of	an	int:	%Lu	bytes(s)\n",	(unsigned	long)sizeof(w));
	printf("size	of	a	long	int:	%Lu	bytes(s)\n",	(unsigned	long)sizeof(e));
			printf("size	of	a	long	long	int:	%Lu	bytes(s)\n",	(unsigned	long)sizeof(r));
			printf("size	of	a	float:	%Lu	bytes(s)\n",	(unsigned	long)sizeof(f));
			return	(0);
}
