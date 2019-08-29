#include <iostream>
#include "Windows.h"
using namespace std;

extern int add(int a,int b);
extern float add(float a,float b);
extern double add(double a,double b);

int main()
{
	cout<<add(3,4)<<endl;
	cout<<add(3.4,1.0)<<endl;
	cout<<add(2.3333,2.444)<<endl;
}

int add(int a,int b)
{
	return a+b;
}
float add(float a,float b)
{
	return a/b;
}
double add(double a,double b)
{
	return a*b;
}
