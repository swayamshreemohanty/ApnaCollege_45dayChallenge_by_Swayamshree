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

int insertionSorting(int A[],int size)
{
    for (int i = 1; i < size; i++)
    {
        int current=A[i];
        int current_previous=i-1;
        while ((A[current_previous]>current) && current_previous>=0)
        {
            A[current_previous+1]=A[current_previous];
            current_previous--;
        }

        A[current_previous+1]=current;
        
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
    insertionSorting(A,size);
    cout<<"After sorting: "<<endl;
    displayArray(A,size);
}