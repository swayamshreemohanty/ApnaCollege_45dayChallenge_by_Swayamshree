#include"iostream"
#include"climits"
using namespace std;

int main()
{
    int input;
    cout<<"Enter the size of the array: ";
    cin>>input;
    int array[input];
    
    int minNo=INT_MAX;
    int maxNo=INT_MIN;

    cout<<"This is minNo: "<<minNo;
    cout<<endl;
    cout<<"This is maxNo: "<<maxNo;
    cout<<endl;

    for (int i = 0; i < input; i++)
    {
        cout<<"Enter element "<<i+1<<" : ";
        cin>>array[i];
    }

    for (int i = 0; i < input; i++)
    {
        cout<<array[i]<<" ";
    }

    //check max/min

    for (int i = 0; i < input; i++)
    {
        if (array[i]>maxNo)       //To check for max element
        {
            maxNo=array[i];
        }

        if (array[i]<minNo)       //To check for min element
        {
            minNo=array[i];
        }
    }
    cout<<endl;
    cout<<"This is Max element: "<<maxNo<<", This is Min element: "<<minNo;
    
    return 0;
}