#include <stdio.h>
#include <stdarg.h>

void print_all(const char * const format, ...)
{
	va_list tk;
	const char *m = format;
	char c;
	int i;
	float f;
	char *s;

	va_start(tk, format);

	while (*m)
	{
		c = *m;

		if (c == 'c')
		{
			printf("%c", va_arg(tk, int));
		}
		else if (c == 'i')
			printf("%d", va_arg(tk, int));
		else if (c == 'f')
			printf("%f", va_arg(tk, double));
		else if (c == 's')
			s = va_arg(tk, char *);
			if (s == NULL)
				printf("(nil)");
			else
			{
				printf("%s", s);
			}
	}	

	m++;
	if (*m)
	{
		i = 0;
		while (*m && *m != 'c' && *m != 'i' && *m != 's' && *m != 'f')
		{
			m++;
			i++;
		}
		if (i > 0)
		{
			printf(", ");
		}	
	}
	}

	va_end(tk);
	printf("\n");
}

