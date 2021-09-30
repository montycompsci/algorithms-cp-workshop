#include <iostream>
using namespace std;

int main() {
	int arr[5] = { 0,0,0,0,0 };//Indexed from 0,4
	cout << arr[0];
	cout << arr[1] << arr[2] << arr[3] << arr[4];
	//DO NOT try to access arr[5]
	int N;
	cin >> N;
	//Variable number of inputs, first read the number of numbers, then read them all in a for loop 
	// N cannot exceed the max size (In this case-5), otherwise arr[i] will access an element out of bounds 
	for (int i = 0;i < N;i++)
	{
		cin >> arr[i];
	}

}