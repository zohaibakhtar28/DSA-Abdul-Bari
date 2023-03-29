#include <stdio.h>
struct Array
{
    int A[5];
    int size;
    int length;
};


int BinarySearch(struct Array arr, int key)
{
    int l = 0, mid, h;
    h = arr.length - 1;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr.A[mid])
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else if (key > arr.A[mid])
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{

    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
    printf("%d\n", BinarySearch(arr, 10));
    printf("%d\n", RBinSearch(arr.A,0,arr.length, 10));

    return 0;
}


// Recursive Approach
/*
int RBinSearch (int a[], int l, int h, int key)
{
    int mid;
    if(l<=h)
    {
        mid = l+h/2;
        if (key == mid)
        {
            return mid;
        }
        else if (key<a[mid])
        {
            return RBinSearch(a,l,mid-1,key);
        }
        else
        {
            return RBinSearch(a,mid+1,h,key);
        }
        
        
        
    }
    return -1;
}

int main()
{

    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
 
    printf("%d\n", RBinSearch(arr.A,0,arr.length, 10));

    return 0;
}
*/