#include <iostream>
using namespace std;

void printnumber(int a){
	cout << "we are printing an integer " << a << endl;
}
void printnumber(float a){
	cout << "we are printing a float " << a << endl;
}


int main(int argc, char** argv) {
	int x = 12;
	float b = 22.2;
	
	printnumber(x);
	printnumber(b);
	
	return 0;
}
