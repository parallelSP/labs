// Factorization.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
		int t, i = 2;
		printf("vvedite chislo\n");
		scanf("%d", &t);

		printf("%d = ", t);

		while (i <= t)
		{
			if (t%i == 0)
			{
				printf("%d", i);
				t = t / i;
				if (t>1)
					printf("*");
			}
			else
				i = i + 1;
		}

		getchar();
		getchar();
	}


