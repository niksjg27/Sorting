#include <iostream>

using namespace std;

void sort(int *a, int n)
{
    int j, i;
    int temp;
    for(j = 1; j < n; j++)
    {
        i = j;
        while(i > 0)
        {
            if(a[i] < a[i-1])
            {
                temp = a[i];
                a[i] = a[i-1];
                a[i-1] = temp;
                i--;
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