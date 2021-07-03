#include"iostream"
using namespace std;

int find_smallest_missing(int a[], int size)
{
    int i=0,j=0;
    int N=1e5+2;
    int missing_element=-1;
    bool check[N];
    for (int i = 0; i < N; i++)
    {
        check[i]=false;
    }

    for (int i = 0; i < size; i++)
    {
        if (a[i]>=0)
        {
            check[a[i]]=true;
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
        if (check[i]==false)
        {
            missing_element=i;
            break;
        }
        
    }
    cout<<missing_element;    
}

int main()
{
    int size=0;
    cin>>size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    
    find_smallest_missing(a,size);

    return 0;
}