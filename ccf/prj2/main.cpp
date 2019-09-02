#include <iostream>
#include<sstream>
using namespace std;
 
class complex
{
		double re;
		double im;
	public:
		complex(const double r,const double i)
		{
			cout<<"To use constructed function"<<endl;
			re=r+i;
			im=r-i;
		}
		string text()
		{
			stringstream ss;
			ss<<re<<"+"<<im<<"j";
			return ss.str();
		}
};
 
int main()
{
  	complex a(1,2);
  	cout<<"a="<<a.text()<<endl;
  	complex b(3,4);
  	cout<<"b="<<b.text()<<endl;
	return 0;
}
