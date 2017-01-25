#include "MathFunctions.h"

double power(double base, int32_t exponent){
	int32_t result = base;
	int32_t i;

	for(i = 1; i < exponent; ++i ){
		result = result*base;
	}

	return result;
}