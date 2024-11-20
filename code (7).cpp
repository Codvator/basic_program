#include <iostream>
using namespace std;
int pat(int a)
{
    int i=0;
    while(i<a)
    {
        int j=0;
        while(j<=i)
        {
            cout<<"$";
            ++j;
        }
        cout<<endl;
        ++i;
        
        
    }
    
    return 0;
}
    


int main() {
	int n;
	cin>>n;
	pat(n);
	return 0;
}