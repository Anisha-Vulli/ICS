#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(int argc, char const *argv[])
{
	printf("Character minimum value is: %d\n", CHAR_MIN);
	printf("Character maximum value is: %d\n", CHAR_MAX);
	printf("Integer minimum value is: %d\n", INT_MIN);
	printf("Integer maximum value is: %d\n", INT_MAX);
	printf("Float minimum value is: %f\n", FLT_MIN);
	printf("Float maximum value is: %f\n", FLT_MAX);
	printf("Long minimum value is: %ld\n", LONG_MIN);
	printf("Long maximum value is: %ld\n", LONG_MAX);
	printf("Double minimum value is: %lf\n", DBL_MIN);
	printf("Double maximum value is: %lf\n", DBL_MAX);
	return 0;
}