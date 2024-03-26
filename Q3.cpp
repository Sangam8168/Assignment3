#include<iostream>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int arr[size];
    int max;
    cin>>max;
    int hash[max+1]={0};
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
        hash[arr[i]]++;
    }
    int element;
    cin>>element;
    cout<<hash[element];
    return 0;
}
