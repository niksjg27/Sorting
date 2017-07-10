#include <iostream>

using namespace std;

void max_heapify(int *a, int N, int n)
{
    int temp;
    int left = 2 * n;
    int right = 2 * n + 1;
    int max_index = n;
    if(left <= N && a[left] > a[n])
        max_index = left;
    if(right <= N && a[right] > a[max_index])
        max_index = right;
    if(max_index != n)
    {
        temp = a[n];
        a[n] = a[max_index];
        a[max_index] = temp;
        max_heapify(a,N,max_index);
    }
    
    
}

void build(int *a)
{
    int N = a[0];
    int i;
    for(i = N/2; i >= 1; i--)
    {
        max_heapify(a,N,i);
    }
    
}

void heap_sort(int *a)
{
    int i, temp;
    int N = a[0];
    build(a);
    for(i = N; i >= 2; i--)
    {
        temp = a[N];
        a[N] = a[1];
        a[1] = temp;
        N = N - 1;
        max_heapify(a,N,1);
    }
}

int main()
{
    int n,num;
    cout<<"Enter size: ";
    cin>>n;
    int *arr;
    arr = new int();
    arr[0] = n;
    for(int i = 1; i <= n; i++)
    {
        cin>>num;
        arr[i] = num;
    }
    heap_sort(arr);
    for(int i = 1; i <= n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}