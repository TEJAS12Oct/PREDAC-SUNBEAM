#include<stdio.h>
//stdin, stdout and stderr are standard stream objects of C which are associated with console.
int main( void ){
	printf("Hello\n");
	//fprintf(stdout, "Hello\n");

	int number;
	scanf("%d", &number );
	//fscanf(stdin, "%d", &number );

	const char *error = "/ by zero exception";
	printf("%s", error);
	//fprintf(stderr,"%s", error);
	return 0;
}
