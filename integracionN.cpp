#include <iostream>
#include <math.h>
#include <iomanip>

using std::setprecision;
using std::pow;
using namespace std;

double f(double x){
	return 1.0/(16.0+pow(x,2));
}

double trapezoide(double a, double b, double h, double n){
	double result = (f(a)/2) + (f(b)/2);
	
	for (int i = 2; i <= n; i++){
		result = result + f(a+(i-1)*h);
	}
	return result*h;
}


int main(){
double t = 6.0; //camtidad de trapecios
double a = 0.0; //limite inferior
double b = 3.0; //limite superior
double h = (b-a)/t; //paso
cout<<setprecision(10)<< trapezoide(a,b,h,t);	
	
}
