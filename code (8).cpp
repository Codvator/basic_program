#include <iostream>
using namespace std;
int fibonacci(int x)
{
    int a=0;
    int b=1;
    int new_num;
    cout<<a<<" "<<b<<" ";
    int i=0;
    while(i<x)
    {
        new_num=a+b;
        cout<<new_num<<" ";
        a=b;
        b=new_num;
        ++i;
    }
    
    return 0;
}
int main() {
    int a;
    cin>>a;
	fibonacci(a);
	return 0;
}