#include<iostream>
using namespace std;
int main()
{
	int z;
	int array[5];
	cout<<"Enter five numbers:"<<endl;
	for(z=0;z<=4;z++){
		cin>>array[z];
	}
	cout<<"Entered numbers are:"<<endl;
		for(z=0;z<=4;z++){
		cout<<array[z]<<endl;
	}
}
