#include<iostream>
using namespace std;
class complex
{
	
	public:
		int real;
		int imag;
		complex()
		{
			real=0;
			imag=0;
		}
		complex(int _real,int _imag)
		{
			real=_real;
			imag=_imag;
		}
		void print()
		{
			cout<<"The complex number is  "<<real<<" + "<<imag<<"i";
		}
		void print_add()
		{
			cout<<"The addition between the given two complex number is  "<<real<<" + "<<imag<<"i";
		}
		void print_diff()
		{
			cout<<"The difference between the given two complex number is  "<<real<<" + "<<imag<<"i";
		}
		void print_product()
		{
			cout<<"The product between the given two complex number is  "<<real<<" + "<<imag<<"i";
		}
};

int main()
{
	complex comp1(2,3);
	complex comp2(3,2);
	comp1.print();
	cout<<endl;
	comp2.print();
	cout<<endl;
	
	complex comp3;
	comp3.real = comp1.real + comp2.real;
	comp3.imag = comp1.imag + comp2.imag;
	comp3.print_add();
	cout<<endl;
	
	complex comp4;
	comp4.real = comp1.real - comp2.real;
	comp4.imag = comp1.imag - comp2.imag;
	comp4.print_diff();
	cout<<endl;
	
	complex comp5;
	comp5.real = comp1.real*comp2.real - comp1.imag*comp2.imag;
	comp5.imag = comp1.imag*comp2.real + comp1.real*comp2.imag;
	comp5.print_product();
	cout<<endl;
}















