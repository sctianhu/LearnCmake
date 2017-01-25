#include "config.h"
#include <iostream>
#include <stdlib.h>

#ifdef USE_MYMATH
  #include "math/MathFunctions.h"
#else
  #include <math.h>
#endif

using namespace std;

int main()
{
	cout<<"Tutorial_VERSION_MAJOR: "<<Tutorial_VERSION_MAJOR<<endl;
    cout<<"Tutorial_VERSION_MINOR: "<<Tutorial_VERSION_MINOR<<endl;

    double base=2.0;
    int32_t exponennt=4;

#ifdef USE_MYMATH
    printf("Now we use our own Math library.\n");
   	double result = power(base,exponennt);
#else
   	printf("Now we use standard libaray. \n");
   	double result = pow(base,exponennt);
#endif
   	printf("%g ^ %d is %g \n",base,exponennt,result );
	cout<<"hello world"<<endl;
}