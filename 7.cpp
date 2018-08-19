#include<iostream>
#include<conio.h>
using namespace std;
int main () {
	int a,b,temp;
	cout<<"enter two numbers two be swapped";
	cin>> a >> b;
	temp = a;
	a =b; 
	b =temp;
	cout<<"Numbers after swapping are "<< a<< "\n"<< b;
	getch();
}
