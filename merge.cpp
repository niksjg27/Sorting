#include <iostream>

using namespace std;



int* merge(int *aleft, int *aright)
{
    int *b;
    b = new int();
    int i = 0, j = 0, k = 0;
    int m = sizeof(aleft)/sizeof(aleft[0]);
    int n = sizeof(aright)/sizeof(aright[0]);
    
    while(i+j < m+n)
    {
        if(i == m)
        {
            b[k] = aright[j];
            j++;
            
        }
        else if(j == n)
        {
            b[k] = aleft[i];
            i++;
            
        }
        else if(aleft[i] <= aright[j])
        {
            b[k] = aleft[i];
            i++;
            
        }
        else
        {
            b[k] = aright[j];
            j++;
        }
        k++;
        for(int s = 0; s < k; s++)
        {
            cout<<b[s]<<" ";
        }
        cout<<endl;
    }
    return b;
}

int* mergesort(int *a, int l, int r)
{
    
    
    if(r - l <= 1)
    {
        int *b;
        b = new int();
        for(int i = l; i < r; i++)
            b[i] = a[i];
        return b;
    }
        
    if(r - l > 1)
    {
    int mid = (l + r)/2;
    int *aleft, *aright;
    aleft = new int();
    aright = new int();
    aleft = mergesort(a,l,mid);
    aright = mergesort(a,mid,r);
    return(merge(aleft,aright));
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
    arr = mergesort(arr,0,n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}