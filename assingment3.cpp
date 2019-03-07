#include <iostream>
using namespace std;

int main()
 {
 	int salary, amountdeducted, netsalary;
 	double taxrate;
 	cout << "Enter your salary\n";
 	cin >> salary;

 	if(salary>0 && salary<147580)
	 {
	 	 taxrate=10.0;

	 } else if(salary>147581 && salary<286623)
	 {
	 	taxrate=15.0;
	 } else if(salary>286624 && salary<425666)
	 {
	 	taxrate=20.0;
	 } else if(salary>425667 && salary<546709)
	 {
		taxrate=25.0;
	 } else if(salary>546710)
	 {
		taxrate=30.0;
	 }

	 	amountdeducted = (taxrate/100)*salary;
	 	netsalary = salary - amountdeducted;

	 	cout << "Your net salary is:" << netsalary << endl;
	 	cout << "The taxrate is:" << taxrate << endl;
	 	cout << "Your amount deducted is:" << amountdeducted << endl;
	return 0;
}
