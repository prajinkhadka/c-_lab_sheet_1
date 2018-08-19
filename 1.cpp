#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int arr[4];
	int i =0;
	for( i =0; i<4; i++){
		cin >> arr[i];
	}
	int sum =0;
	for( i =0; i <4; i ++ ){
		sum = sum + arr[i];
	}
	cout<<"The sum is "<< sum ;
	getch();
}
