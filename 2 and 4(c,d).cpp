#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int arr[3];
	int i =0;
	for( i =0; i<3; i++){
		cin >> arr[i];
	}
   int  big = arr[0] > arr[1] ? (arr[0] > arr[2] ? arr[0] : arr[2]) : (arr[1] > arr[2] ? arr[1] : arr[2]) ;
   int small =  arr[0] < arr[1] ? (arr[0] < arr[2] ? arr[0] : arr[2]) : (arr[1] < arr[2] ? arr[1] : arr[2]) ;
   cout<<"The largest is" << big << endl <<"smallest is "<< small;
	getch();
}
