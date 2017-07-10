def mergesort(a,l,r):
    if r-l <= 1:
        return a[l:r]
        
    if r-l > 1:
        mid = (l+r)//2
        aleft = mergesort(a,l,mid)
        aright = mergesort(a,mid,r)
        return(merge(aleft,aright))
    
def merge(aleft,aright):
    (C,m,n) = ([],len(aleft),len(aright))
    (i,j) = (0,0)
    while i+j < m+n:
        if i == m:
            C.append(aright[j])
            j = j + 1
        elif j == n:
            C.append(aleft[i])
            i = i + 1
        elif aleft[i] < aright[j]:
            C.append(aleft[i])
            i = i + 1
        else:
            C.append(aright[j])
            j = j + 1
            
    return C
















a = []
n = int(input("Enter size: "))
for i in range(n):
    a.append(int(input()))
a = mergesort(a,0,n)
print(a)