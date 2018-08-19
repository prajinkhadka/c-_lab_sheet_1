#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int arr[3];
	int i =0;
	for( i =0; i<3; i++){
		cin >> arr[i];
	}
	int sum =0;
	for( i =0; i <3; i ++ ){
		sum = sum + arr[i];
	}
	cout<<"The sum is "<< sum ;
	int a = sum / 3;
	cout<< "The average is "<< a;
	getche();
}
