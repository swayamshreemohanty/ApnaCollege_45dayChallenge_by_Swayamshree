//Given an unsorted array A of size N of non-negative integers, find a continuous
//subarray which adds to a given number S.

#include"iostream"
using namespace std;

void find_num_subArray_bruteForce(int a[],int size,int num)
{
    for (int i = 0; i < size; i++)
    {
        int sum_subarray=0;
        for (int j = i; j < size; j++)
        {
            sum_subarray+=a[j];
            if (sum_subarray==num)
            {
                cout<<i<<" "<<j<<endl;
            }
            
        }    
    }   
}

void find_num_subArray_optimized(int a[],int size,int num)
{
 int i=0,j=0,start=-1,end=-1,sum=0;

    while ((j<num) && (sum+a[j]<=num))
    {
        sum+=a[j];
        j++;
    }

    if (sum==num)
    {
        cout<<i+1<<" "<<j<<endl;
        return;
    }
    else
    {
        while (j<num)
        {
            sum+=a[j];
            while (sum>num)
            {
                sum-=a[i];
                i++;
            }

            if (sum==num)
            {
                start=i+1;
                end=j+1;
                break;
            }
            j++;
        }
        cout<<start<<" "<<end;
        
    }
}


int main()
{
    int size,num=0;

    cin>>size>>num;

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    // find_num_subArray_bruteForce(arr,size,num);
    find_num_subArray_optimized(arr,size,num);
    return 0;
}