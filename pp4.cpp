/*Write a function FindMaxInArray, which will find the greatest number from an array with its desired index? The greatest number and its desired index should be printed in separate lines.*/
#include<iostream>
using namespace std;
void FindMaxInArray(int arr[],int n)
{
    int max=-1,maxidx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
            maxidx=i;
        }
    }
    cout<<"The maximum element in an array is:"<<endl;
    cout<<max<<endl;
    cout<<"The index of maximum element is:"<<endl;
    cout<<maxidx<<endl;
}
int main()
{
    int arr[100];
    int l;
    cout<<"Enter the size of the array:"<<endl;
    cin>>l;
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<l;i++)
        cin>>arr[i];
    FindMaxInArray(arr,l);
    return 0;
}
