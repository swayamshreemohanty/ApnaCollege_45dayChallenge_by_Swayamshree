#include"iostream"
using namespace std;

int main()
{
    int row,element=0;
    cin>>row>>element;
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
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
}