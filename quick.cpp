#include <iostream>

using namespace std;


int partition(int *a, int l, int h)
{
    int pivot = a[l];
    int i = l + 1;
    int j = h;
    int temp;
    
    while(i <= j)
    {
        while(i <= j && a[i] < pivot)
            i++;
        
        while(a[j] > pivot)
            j--;
            
        if(i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    temp = a[l];
    a[l] = a[j];
    a[j] = temp;
    return j;
    
    
}


void sort(int *a, int l, int h)
{
    int j;
    if(l < h)
    {
        j = partition(a,l,h);
        sort(a,l,j-1);
        sort(a,j+1,h);
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
    sort(arr,0,n-1);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}