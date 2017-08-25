#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable :4996)
#define RATE_PER_HOUR 3.0

void main()
{
	int noHours, noMins;
	float payment;

	puts(" ===================");
	puts("| C-Y-B-E-R C-A-F-E |");
	puts(" ===================");
	puts("");
	//input
	puts("Please key your usage duration");
	printf("Hours Spent   :");
	scanf("%d", &noHours);
	printf("Minutes Spent :");
	scanf("%d", &noMins);
	//process
	payment = (noHours*RATE_PER_HOUR) + (noMins*(RATE_PER_HOUR / 60));
	//output
	puts("");
	printf("Total Payment = RM%.2f", payment);

	puts("\n");
	system("pause");
}
