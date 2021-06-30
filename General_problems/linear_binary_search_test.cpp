#include"iostream"
using namespace std;

int binarySearch(int array[],int size, int key)
{
    int start=0,mid=0;
    int end=size-1;

    while (start<=end)
    {     
        mid=(start+end)/2;
        if (array[mid]==key)
        {
            return mid;
        }
        else if (array[mid]>key)
        {
            end=mid-1;
        }
        else if (array[mid]<key)
        {
            start=mid+1;
        }
    }
}

int linearSearch(int array[],int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i]==key)
        {
            return i;
        }
        
    }
    
}
int main()
{
    int array[]={10,23,33,50,60,75,76,80,90};
    int size=sizeof (array)/sizeof (array[0]);
    int key;

    cin>>key;

    // cout<<binarySearch(array,size,key);
    cout<<linearSearch(array,size,key);

    return 0;
}