#include <stdio.h>

int main (void) {
	printf("char        %ld\n", sizeof(char));
	printf("short       %ld\n", sizeof(short));
	printf("int         %ld\n", sizeof(int));
	printf("long        %ld\n", sizeof(long));
	printf("long long   %ld\n", sizeof(long long));
	printf("float       %ld\n", sizeof(float));
	printf("double      %ld\n", sizeof(double));
	printf("long double %ld\n", sizeof(long double));

	long sizes[] = {
		sizeof(char),
		sizeof(short),
		sizeof(int),
		sizeof(long),
		sizeof(long long),
		sizeof(float),
		sizeof(double),
		sizeof(long double)
	};

	for (int i = 0; i < sizeof(sizes) / sizeof(sizes[0]); i++) {
		printf("%ld\n", sizes[i]);
	}

	return 0;
}
