#include "../Matrix/Matrix.h"
#include "../Complex/Complex.h"
#include "../Line/Line.h"
#include "../RationalNumber/RationalNumber.h"
#include "../Bank/Bank.h"
#include "../University/Collage/College.h"
#include "../University/Prof/Prof.h"
#include "../University/Assistant/Assistant.h"
#include "../University/Lecturer/Lecturer.h"
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

	printf("*** Testing Line and Points ***\n");
	Point p1(7,12);
	Point p2(5,13);
	Line eqn1(p1,p2);
	eqn1.print();

	Line eqn2(eqn1+30);
	eqn2.print();
	printf("*** Testing Line and Points end ***\n");

	printf("*** Testing Rational Numbers ***\n");


	RationalNumber N1(3,7);
	RationalNumber N2(2,9);
	RationalNumber N3 = N1 + 5 + 10; /* CORRECT */
	RationalNumber sum =  N2 + N3 - RationalNumber(1,2);
	RationalNumber mul = RationalNumber(10) * 5;
	cout << N3 << endl;
	cout << sum << endl;
	cout << mul << endl;
	mul--;
	cout << mul << endl;



	/* Testing Bank account */
	cout << "Testing bank Account" << endl;
	Bank ADIB;
	//Account a1("Joe", "Moham", 50.5);
	ADIB.OpenAccount("Youssef", "Mohamed", 50.5);
	ADIB.OpenAccount("Joee", "Mohamed", 100.5);
	ADIB.OpenAccount("Sameh", "Mohamed", 200.5); // 3
	ADIB.OpenAccount("Essam", "Mohamed", 600.5);

	ADIB.BalanceEnquiry(3); // 200.5
	ADIB.Deposit(3, 60); // Sameh Mohamed 260.5
	ADIB.BalanceEnquiry(3); // 200.5

	ADIB.Withdraw(1, 10);
	ADIB.BalanceEnquiry(1); // Youssef Mohamed 40.5

	ADIB.showAllAccounts();

	cout <<  "Testing bank Account END " << endl;

	cout << "Testing University" << endl;
	College GUC(20);
	Prof * prf_1 = new Prof("Hesham", "Hamed", 15, 6, 50);
	Assistant* a_1 = new Assistant("Omar", "Shehata", 50, 100, "MPC");

	GUC.addStufyMember(a_1);
	GUC.addStufyMember(prf_1);

	GUC.putData();
	delete prf_1;
	delete a_1;

	cout << "Testing Collage end" << endl;

}
