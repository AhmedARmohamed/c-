#include <iostream>
using namespace std;

int main()
{
	float a;
	float p=10000;
	float r=.01;
 	for(int day = 1; day <=30; day++)
	 {
 		a = p * (1+r, day);
 		cout << day << "------------" << a << endl;
	 }
}
