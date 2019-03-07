#include <iostream>
using namespace std;

int main(int argc, char** argv) 
{
	
	float numb;
	int x = 4;
	cout << "please enter year \n";
	cin >> numb;
	
	
	if(numb % x == 0){
		cout << "this is a leap year";
	} else{
		cout << "this is not a leap year";
	}
	return 0;
}
