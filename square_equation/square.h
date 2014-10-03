#ifndef _SQUARE_H_
#define _SQUARE_H_

#include <stdio.h>

enum solutions_count
{
    no_solutions,
    one_solution,
    two_solutions,
    inf_solutions,
    solving_error
};

bool input(double* a, double* b, double *c);
int  solve(double a, double b, double c, double* roots);
void output(int count, double* roots);
#endif
