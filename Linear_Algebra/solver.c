#include <stdio.h>

int main()
{
	double a, b, c, d, e, f;
	double D, Dx, Dy, x, y;

	printf("=== Smart 2x2 Equation Solver ===\n");
	printf("Enter equations in the form: ax + by = c\n\n");

	printf("Enter first equation (e.g., 2x + 3y = 8):\n");
	scanf("%lfx + %lfy = %lf", &a, &b, &c);

	printf("Enter second equation (e.g., 4x + 5y = 14):\n");
	scanf("%lfx + %lfy = %lf", &d, &e, &f);

	D = (a * e) - (b * d);

	if (D != 0)
	{
		Dx = (c * e) - (b * f);
		Dy = (a * f) - (c * d);

		x = Dx / D;
		y = Dy / D;

		printf("\nSolution:\n");
		printf("x = %.2lf\n", x);
		printf("y = %.2lf\n", y);
	}
	else
	{
		printf("\nNo unique solution exists.\n");
	}

	return 0;
}