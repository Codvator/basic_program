#include <iostream>
using namespace std;

int swap(int &a,int &b)
{
    int temp = a ;
    a=b;
    b=temp;
    cout<<a<<b;
    return a;
    return b;
}

int main() {
    int a,b;
	//cout<<"Enter the first number"<<endl;
	cin>>a;
	//cout<<"Enter the second number"<<endl;
	cin>>b;
	cout<<a<<b;
	swap(a,b);
	cout<<a<<b;
	return 0;
}