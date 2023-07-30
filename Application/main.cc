#include "../Matrix/Matrix.h"
#include "../Complex/Complex.h"

int main(){
	/* Testing Matrix */
	printf("*** Start testing Matrix class ***");
	Matrix m(2,2);
	m.set_element(0,0,3);
	m.set_element(0,1,4);
	m.set_element(1,0,5);
	m.set_element(1,1,6);
	m.print();
	Matrix m1(m);
	m1.print();
	printf("*** Testing Matrix class end ***\n");

	printf("*** Testing Complex Number class ***\n");
	Complex c1;
	Complex c2(3);
	Complex c3(20,10);
	Complex c4(30,20);

	c1.add(c3,c4);
	c2.Multiply(c3,c4);

	c1.DisplayComplexNumber();
	c2.DisplayComplexNumber();

	printf("*** Testing complex matrix class end ***");

}
