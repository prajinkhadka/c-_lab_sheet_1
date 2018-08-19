#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int p,t,r,si;
	cout<<"Enter principle, time and rate";
	cin>>p>>t>>r;
	si = (p *t * r) /100;
	int a = si +p;
	cout<<"The SI is "<< si<<"amount is "<< a;
	getch();
	
}
