//check the string is palindrom or not? 
//Ex: "nitin", if you reverse this the O/P also "nitin"

#include"iostream"
using namespace std;

int main()
{
    int size=0;
    cin>>size;
    char arr[size+1];
    cin>>arr;
    bool check=1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]!=arr[size-1-i])
        {
            check=0;
            break;
        }
    }
    if (check==true)
    {
        cout<<arr<<" is a palindrom number";
    }
    else
    {
        cout<<arr<<" is not palindrom number";
    }
    return 0;
}