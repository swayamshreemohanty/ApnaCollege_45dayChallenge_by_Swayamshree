#include"iostream"
#include"climits"
using namespace std;

//cumulative sum approach(self thought)
void max_subarray_sum_cumulative(int a[],int size)
{
    int max_subarray_sum= INT_MIN;
    for (int i = 0; i < size; i++)
    {
        int current_sum=0;
        for (int j = i; j < size; j++)
        {
            current_sum+=a[j];
            max_subarray_sum=max(max_subarray_sum,current_sum);
        }
    }
    cout<<max_subarray_sum; 
}

//BruteForce approach
void max_subarray_sum_bruteforce(int a[],int size)
{
    int max_subarray_sum= INT_MIN;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int current_sum=0;
            for (int k = i; k <= j; k++)
            {
                current_sum+=a[k];
            }    
            max_subarray_sum=max(max_subarray_sum,current_sum);
        }
    }
    cout<<max_subarray_sum; 
}

//Kadane's Formula
void max_subarray_sum_kadaneFormula(int a[],int size)
{
    int max_subarray_sum=INT_MIN;
    int current_sum=0;
    for (int i = 0; i < size; i++)
    {
        current_sum+=a[i];
        
        if (current_sum<0)
        {
            current_sum=0;
        }
        max_subarray_sum=max(max_subarray_sum,current_sum);
    }
    cout<<max_subarray_sum;
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
    
    // max_subarray_sum_cumulative(a,size);
    // max_subarray_sum_bruteforce(a,size);
    max_subarray_sum_kadaneFormula(a,size);
    return 0;
}