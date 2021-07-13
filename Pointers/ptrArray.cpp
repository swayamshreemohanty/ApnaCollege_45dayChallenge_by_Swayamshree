#include"iostream"
using namespace std;

int main()
{
    int arr[]={10,20,30,40};
    int *arrptr=arr;

    // cout<<*arr;

    for (int i = 0; i < 4; i++)
    {
        cout<<*arrptr<<" ";
        arrptr++;
        // cout<<*(arrptr+i)<<" ";
        // arrptr++;
    }
    

    return 0;
}