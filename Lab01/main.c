#include <locale.h>
#include <stdio.h>
#include "main.h"

int main()
{
	setlocale(LC_ALL, "RUS");
	// 1.1
	puts("Моя программа");

	// 1.2
	puts("Hello world!");

	// 2 
	name();

	//3
	date();
}
