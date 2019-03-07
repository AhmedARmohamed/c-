#include <iostream>
using namespace std;


int main()
 {
int side1, side2, side3;
 cout << "input the  side\n";
 cin >>side1;
 
 cout << "input the  side\n";
 cin >>side2;
 
 cout << "input the  side\n";
 cin >>side3;
 
 if(side1==side2 & side2==side3){
 	cout << "triangle is equilateral";
 	
 }
  else if(side1==side2 || side1==side3 ||side2==side3){
  cout << "triangle is isoscles";
 }else{ 
	cout << "triangle is shit";
}
	return 0;
}
