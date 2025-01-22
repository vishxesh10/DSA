#include<iostream>
using namespace std;
int main()
{
    int arr[20],size,num,pos,i;

    cout<<"enter the size of the array:";
    cin>>size;

    cout<<"enter the elements of thr array"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"the elements of the array are:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl<<"Enter the number you want to add;"<<endl;
    cin>>num;

    cout<<"enter the position where you wan to enter the element:"<<endl;
    cin>>pos;



    for(i=size;i>=pos-1;i--) {
        arr[i+1]=arr[i];
    }
    arr[pos]=num;
    size++;

    cout<<"the updated array is:";
    for(i=0;i<size;i++) {
        cout<<arr[i]<<" ";
    }
}