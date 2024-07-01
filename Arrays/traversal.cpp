#include<iostream>
using namespace std;
int main()
{
    int arr[40],size,i;

    cout<<"enter the size of the array:";
    cin>>size;

    cout<<"enter the elements of thr array";
    for( i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"the elements of the array are:";
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}