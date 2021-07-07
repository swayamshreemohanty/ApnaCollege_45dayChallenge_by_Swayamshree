#include"iostream"
using namespace std;

int insertionSort(int a[],int size)
{
    for (int i = 1; i < size; i++)
    {
        int current=a[i];
        int j=i-1;
        while ((a[j]>current) && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
}

int bubbleSort(int a[],int size)
{
    for (int counter = 1; counter < size; counter++)
    {
        for (int i = 0; i < size-counter; i++)
        {    
            if (a[i]>a[i+1])
            {
                int temp=0;
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
}

int selectionSort(int a[],int size)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (a[i]>a[j])
            {
                int temp=0;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }   
    }
}

int main()
{
    int size;
    cin>>size;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }

    // insertionSort(a,size);
    // bubbleSort(a,size);
    // selectionSort(a,size);

    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    

}