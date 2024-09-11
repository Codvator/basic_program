#include<iostream>
using namespace std;
void bubblesort(int a[],int n)
{
    for(int i=0;i<n-1;++i)

    {
        for(int j=0;j<n-1-i;++j)
    {
        if(a[j]>a[j+1])
    {
        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
    }
    }
     
}
void display_array(int a[],int n)
{
    cout<<"The sorted array is\n";
    for(int k=0;k<n;++k)
    cout<<a[k]<<" ";
    


}
int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    int a[n];
    cout<<"Enter the integer array\n";
    for(int k=0;k<n;++k)
    cin>>a[k];
    bubblesort(a,n);
    display_array(a,n);
    return 0;

}