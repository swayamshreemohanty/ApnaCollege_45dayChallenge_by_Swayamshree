#include"iostream"
#include"climits"
using namespace std;

int kadane(int a[],int size)
{
    int currentSum=0,maxSubarraySum=INT_MIN;

    for (int i = 0; i < size; i++)
    {
        currentSum+=a[i];
        if (currentSum<0)
        {
            currentSum=0;
        }
        maxSubarraySum=max(maxSubarraySum,currentSum);
    }
    return maxSubarraySum;
}

int maximumCircularSubarraySum(int a[],int size)
{
    int maxSubarraySum=INT_MIN,nowrapSum=0,wrapSum=0,totalsum=0;;

    nowrapSum=kadane(a,size);

    for (int i = 0; i < size ; i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapSum=totalsum+kadane(a,size);
    cout<<max(wrapSum,nowrapSum);

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
    
    maximumCircularSubarraySum(a,size);

}
