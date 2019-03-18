#include<stdio.h>
#include<math.h>
/*double func(float x, float y) {
	double f = x+y; //((0.5 - x + (y*y) / (1 + y + (x*x))))
	return f;
}
int main() {
	float x, y, step_length, till_now;
	printf("enter the x0, y0, step_length, till_now -->");
	scanf("%f,%f,%f,%f", &x, &y, &step_length, &till_now);
	float x0 = x, y0 = y;
	printf("x = %f, y = %f\n\n", x0, y0);
	double xn = till_now;
	printf("\t X \t Y\n\n");
	while (x0<=xn) {
		printf("\t %f \t %f\n\n", x0, y0);
		double k1 = step_length * (func(x0, y0));
		printf("\n k1 --> %lf\n", k1);
		double k2 = step_length * (func((x0 + (step_length / 2.0)), (y0 + (k1 / 2.0)))) ;
		printf("\n k2 --> %lf\n", k2);
		double k3 = step_length * (func((x0 + (step_length / 2.0)), (y0 + (k2 / 2.0))));
		printf("\n k3 --> %lf\n", k3);
		double k4 = step_length * (func((x0 + step_length), (y0 + k3)));
		printf("\n k4 --> %lf\n", k4);
		double K = ((k1 + 2 * k2 + 2 * k3 + k4) / 6.0);
		//
		y0 = y + (K);
		x0 = x0 + step_length;
	}
	system("PAUSE");
	return 0;
}*/

float f(float x, float y);
int main()
{
	float x0, y0, m1, m2, m3, m4, m, y, x, h, xn;
	printf("Enter x0,y0,xn,h:");
	scanf("%f %f %f %f", &x0, &y0, &xn, &h);
	x = x0;
	y = y0;
	printf("\n\nX\t\tY\n");
	while (x < xn)
	{
		m1 = f(x0, y0);
		m2 = f((x0 + h / 2.0), (y0 + m1 * h / 2.0));
		m3 = f((x0 + h / 2.0), (y0 + m2 * h / 2.0));
		m4 = f((x0 + h), (y0 + m3 * h));
		m = ((m1 + 2 * m2 + 2 * m3 + m4) / 6);
		y = y + m * h;
		x = x + h;
		printf("%f\t%f\n", x, y);
	}
	return 0;
}
float f(float x, float y)
{
	float m;
	m = (x - y) / (x + y);
	return m;
}