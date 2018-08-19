#include<iostream>
#include<conio.h>
using namespace std;

int main(){
   int a, b;
   cout<< "Enter two numbers a and b";
   cin >> a >> b;
   if(a%b == 0)
   	cout<< a<< "is the multiple of " << b;
   	else
   	cout<<a << "is not the multiple of "<< b;
   
}
