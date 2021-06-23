/* DSP in C */
/* By Timothy Do */

//Standard Headers
#include <stdio.h>
#include <math.h>

//Local Headers

//Global Constants
double pi = acos(-1.0);

//converts radians to degrees
double radToDeg(double rad)
{
	return rad / pi * 180.0;
}

//converts degrees to radians
double degToRad(double deg)
{
	return deg / 180.0 * pi;
}

//normalizes the angle in the unit circle
double toUnit(double deg)
{
	double normal = deg;
	while(normal >= 360.0)
	{
		normal -= 360.0;
	}
	return normal;
}


int main(void)
{
	return 0;
}
