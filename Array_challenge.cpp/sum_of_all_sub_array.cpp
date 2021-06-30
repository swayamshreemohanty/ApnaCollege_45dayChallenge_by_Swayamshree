//Print the sum of each subarray of a given array a[] of size n

#include"iostream"
using namespace std;

void inputArray(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    
}

void displayArray(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    
}

void printSubArraySum(int a[],int size)
{
    int subArraySum=0;
    for (int i = 0; i < size; i++)
    {
        subArraySum=0;
        for (int j = i; j < size; j++)
        {
            subArraySum+=a[j];
            cout<<subArraySum<<" ";
        }
        
    }
    
}

int main()
{
    int size=0;
    cin>>size;
    int a[size];

    inputArray(a,size);
    printSubArraySum(a,size);
}
