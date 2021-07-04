#include"iostream"
// #include"climits"
using namespace std;

//cumulative sum approach(self thought)
void max_subarray_sum(int a[],int size)
{
    int max_subarray_sum= INT_MIN;
    for (int i = 0; i < size; i++)
    {
        int current_sum=0;
        for (int j = i; j < size; j++)
        {
            current_sum+=a[j];
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
    
    max_subarray_sum(a,size);
    return 0;
}