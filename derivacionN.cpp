#include <iostream>
#include <math.h>


using std::pow;
using std::sin;
using std::log;
using std::atan;
using namespace std;

int comb(int n, int k){
	if(k==0 || k==n) return 1;
	else return comb(n-1,k-1) + comb(n-1,k);
}

double f(double x){
	return x*log(x);
}


double progresiva(int k, double h, double x){
	
	double result;
		
	for (int  i = 0; i < k+1; i++){
		result = result + (pow(-1,i)*comb(k,i)*f(x+(double(k)-i)*h));
	}
	return result/pow(h,k);
}



double centrales(int k, double h, double x){
	
	double result;
		
	for (int  i = 0; i < k+1; i++){
		result = result + (pow(-1,i)*comb(k,i)*f(x-k*(h/2)+(k-i)*h));
	}
	return result/pow(h,k);
}


int main(){		
	int k = 1; //la n-sima derivada
	double h = 0.1; //paso
	double x = 2.0; 
	
	
	cout<<"PROGRESIVA: "<< progresiva(k,h,x)<<"\n";
	cout<<"CENTRAL: "<< centrales(k,h,x);
}


/*
cos
Compute cosine (function )
sin
Compute sine (function )
tan
Compute tangent (function )
acos
Compute arc cosine (function )
asin
Compute arc sine (function )
atan
Compute arc tangent (function )
atan2
Compute arc tangent with two parameters (function )

Hyperbolic functions
cosh
Compute hyperbolic cosine (function )
sinh
Compute hyperbolic sine (function )
tanh
Compute hyperbolic tangent (function )
acosh 
Compute area hyperbolic cosine (function )
asinh 
Compute area hyperbolic sine (function )
atanh 
Compute area hyperbolic tangent (function )

Exponential and logarithmic functions
exp
Compute exponential function (function )
frexp
Get significand and exponent (function )
ldexp
Generate value from significand and exponent (function )
log
Compute natural logarithm (function )
log10
Compute common logarithm (function )
modf
Break into fractional and integral parts (function )
exp2 
Compute binary exponential function (function )
expm1 
Compute exponential minus one (function )
ilogb 
Integer binary logarithm (function )
log1p 
Compute logarithm plus one (function )
log2 
Compute binary logarithm (function )
logb 
Compute floating-point base logarithm (function )
scalbn 
Scale significand using floating-point base exponent (function )
scalbln 
Scale significand using floating-point base exponent (long) (function )

Power functions
pow
Raise to power (function )
sqrt
Compute square root (function )
cbrt 
Compute cubic root (function )
hypot 
Compute hypotenuse (function )
*/
