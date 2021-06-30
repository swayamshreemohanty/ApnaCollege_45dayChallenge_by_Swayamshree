//Given an array  a[] of size n. for every i from 0 to n-1, print the max element (a[0],a[1],...,a[i])

#include"iostream"
#include"climits"
using namespace std;

int maxElement(int a[],int size)
{
    int maxNo=INT_MIN;

    for (int i = 0; i < size; i++)
    {
        // if (a[i]>maxNo)
        // {
        //     maxNo=a[i];
        // }
        maxNo=max(maxNo, a[i]);
        cout<<maxNo<<" ";
    }

}

int main()
{
    int size=0;
    cin>>size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }

    maxElement(a,size);

    return 0;
}
