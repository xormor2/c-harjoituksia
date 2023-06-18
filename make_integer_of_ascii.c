#include <stdio.h>
#include <stdlib.h>
int make_integer_out_of_ascii(const char *param)
{
	int digit=0, i=0, sum=0;;
	while (param[i]!='\0')
	{
		digit = (int)(param[i]-'0');	//ASCII dec 48 = ASCII char '0'
		printf("digit = %d\n", digit);
		sum = (sum*10) + digit;
		printf("sum = %d\n", sum);
		i++;
	}
	return sum;
}
int main(int argc, char *argv[])
{
	int integer=0;
	if (argc==1) { puts("Give an integer for command line parameter."); exit(1); }
	integer = make_integer_out_of_ascii(argv[1]);
	printf("%d\n", integer);
	return 0;
}
