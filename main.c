// this is main.c
#include <stdio.h>
#include <stdlib.h>
#include "screen.h"		// for user-defined header, use double quotes

int main()
{
	int i, arr[80];
	for(i=0; i<80; i++)
		arr[i] = rand()%70 + 30;

	clearScreen();
	setColors(RED, bg (BLUE));
//	printf("Printed from main.\n");
	barChart(arr);
	resetColors();
	printf("\n");
	getchar();
}
