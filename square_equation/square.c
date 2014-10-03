#include "square.h"
#include <math.h>

bool input(double* a, double* b, double *c)
{
		  printf("Input coefficients of the equation and press enter. \n");
  		if ( (scanf("%lg", a) > 0) && (scanf("%lg", b) > 0) && (scanf("%lg", c) > 0) ) 
		  		return true;
	  	return false;
}

int solve(double a, double b, double c, double* roots)
{
		  if ( (a == 0) && (b == 0) && (c == 0) )
			    	return inf_solutions;

  		if ( (a == 0) && (b == 0) && (c != 0) )
		  				return no_solutions;

	  	if ( (a == 0) && (b != 0) )
	  	{
			    	if (roots == NULL)
					      	return solving_error;
    				roots[0] = -c / b;
			    	return one_solution;
  		}
		 
				double d = b*b - 4*a*c;
    
				if (d < 0)
						  return no_solutions;

				if (d == 0)
				{
								if (roots == NULL)
										  return solving_error;
								roots[0] = (-b + sqrt(d)) / (2 * a);
								return one_solution;
				}

				if (d > 0)
				{
								if (roots == NULL)
												return solving_error;
								roots[0] = (-b + sqrt(d)) / (2 * a);
								roots[1] = (-b - sqrt(d)) / (2 * a);
								return two_solutions;
				}
}

void output(int count, double* roots)
{
				if (count == solving_error)
						  printf("An internal error was occured. \n");
				
				if (count == no_solutions)
								printf("The equation have no solutions. \n");

				if (count == inf_solutions)
								printf("Any number is the root of the equation. \n");

				if (count == one_solution)
								printf("the equation have one solution: %lg \n", roots[0]);

					if (count == two_solutions)
								printf("the equation have two solutions: %lg and %lg \n", roots[0], roots[1]);
}
