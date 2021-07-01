//Given array arr[] of size N. find the first repeating element in an array of integers.
//i.e an element that occurs more than once and whose index of first occurance is smallest.


#include "iostream"
#include "climits"
using namespace std;

void find_smallIndex_repeatElement(int arr[],int size)
{
    int min_index=INT_MAX;
    const int N=1e5+2;
    int check_arr[N];
    for (int i = 0; i < N; i++)
    {
        check_arr[i] = -1;
    }

    for (int i = 0; i < size; i++)
    {
        if (check_arr[arr[i]] == -1)
        {
            check_arr[arr[i]]=i;
        }
        else
        {
            min_index=min(min_index,check_arr[arr[i]]);
        }
    }

    if (min_index==INT_MAX)
    {
        cout<<-1;
    }
    else
    {
        cout<<min_index+1;
    }
    
}

int main()
{
    int size;
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }

    find_smallIndex_repeatElement(arr,size);
}