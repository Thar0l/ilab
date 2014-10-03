#include <stdio.h>
#include "square.h"

int main()
{
				double a = 0.0;
				double b = 0.0;
				double c = 0.0;
				double solutions[2] = {0.0, 0.0};

				if (!input(&a, &b, &c))
				{
						  printf("Input error. \n");
						 	return -1;
		  }
    int count = solve(a, b, c, solutions);
		  output(count, solutions);
		  return 0;
}
