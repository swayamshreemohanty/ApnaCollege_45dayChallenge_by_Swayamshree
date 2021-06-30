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

    cout<<"Invalid element"<<endl;
    return -1;
}

int main()
{

    int input;
    int key;
    cout<<"Enter the size of the array: ";
    cin>>input;
    int array[input];

   for (int i = 0; i < input; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>array[i];
    }


    cout<<"Enter the element to search: ";
    cin>>key;

    cout<<"The element is on "<<binarySearch(array,input,key)<<" th index";

    return 0;
}