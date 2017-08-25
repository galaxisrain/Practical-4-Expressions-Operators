#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable :4996)

void main()
{
	int centigrade;
	double farenheit;

	//input
	printf("Enter a temperature in centigrade :");
	scanf("%d", &centigrade);
	//process
	farenheit = 32 + (centigrade*(180.00 / 100.00));
	//Output
	puts("");
	printf("%d Centigarde is equivalent to %.2lf Farenheit",centigrade, farenheit);


	puts("\n");
	system("pause");
}
