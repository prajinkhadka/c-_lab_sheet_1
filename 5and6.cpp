#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int l,b,r;
	cout<<"Enter length and breadth of rectange and radious of circle respectivley";
	cin>> l >> b >> r;
	int area = 2 *l * b;
	int peri = 2 * (l +b);
	int area1 =  3.14*r*r;
	int cir = 2 *3.14 * r;
	cout<<"The area of rectange is "<< area <<"\n"<< "perimeter of rectange is "<< peri;
	cout<<"The area of circle is "<< area1 << "\n"<<"circumference of circle is "<< cir;
	getch();
}
