#include"iostream"
using namespace std;

void insertionSort(int a[],int size)
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

int pairSum(int a[],int size,int num)
{
    int start=0,end=size-1;
    for (int i = 0; i < size; i++)
    {
        if ((a[start]+a[end])==num)
        {
            cout<<start<<" "<<end<<endl;
            return 1;
        }
        else if ((a[start]+a[end])<num)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return 0; 
}

void allpairSum(int a[],int size, int num)
{
    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if ((a[i]+a[j])==num)
            {
                cout<<i<<" "<<j<<endl;
            }
            
        }
        
    }
    
}

int main()
{
    int size,num=0;
    cin>>size>>num;
    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }

    insertionSort(a,size);
    // pairSum(a,size,num);
    allpairSum(a,size,num);

}