#include"iostream"
using namespace std;



int insertArray(int A[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<"Enter element no "<<i+1<<" : ";
        cin>>A[i];
    }
    
}
int displayArray(int A[],int size)
{
     for (int index = 0; index < size; index++)
    {
        cout<<A[index]<<" ";
    }
    cout<<endl;
}

int bubbleSorting(int A[],int size)
{
    for (int counter = 1; counter < size; counter++)
    {    
        for (int i = 0; i < size-counter; i++)
        {
            if (A[i]>A[i+1])
            {
                int temp=0;
                temp=A[i];
                A[i]=A[i+1];
                A[i+1]=temp;
            }
            
        }
    }
}



int main()
{
    int size=0;
    cout<<"Set the element number: ";
    cin>>size;
    int A[size];
    insertArray(A,size);
    cout<<"You entered: "<<endl;
    displayArray(A,size);
    bubbleSorting(A,size);
    cout<<"After sorting: "<<endl;
    displayArray(A,size);
}