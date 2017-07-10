#include <iostream>

using namespace std;

void sort(int *a, int n)
{
    int i,j,temp;
    for(i = 1; i < n; i++)
    {
        for(j = 0; j < n-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    
}

int main()
{
    int n,num;
    cout<<"Enter size: ";
    cin>>n;
    int *arr;
    arr = new int();
    for(int i = 0; i < n; i++)
    {
        cin>>num;
        arr[i] = num;
    }
    sort(arr,n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}