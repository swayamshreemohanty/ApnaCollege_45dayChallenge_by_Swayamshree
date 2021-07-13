#include"iostream"
using namespace std;

int main()
{
    int row,element,num=0;
    cin>>row>>element>>num;
    int a[row][element];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < element; j++)
        {
            cin>>a[i][j];
        }
        
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < element; j++)
        {
            if (a[i][j]==num)
            {
                cout<<i<<" "<<j;
            }
            
        }
        
    }
    
    
}