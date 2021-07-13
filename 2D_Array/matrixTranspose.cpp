#include"iostream"
using namespace std;

int main()
{
    int squareMatrix;
    cin>>squareMatrix;
    int a[squareMatrix][squareMatrix];

    for (int i = 0; i < squareMatrix; i++)
    {
        for (int j = 0; j < squareMatrix; j++)
        {
            cin>>a[i][j];
        }
    }

    //Transpose the matrix
    for (int i = 0; i < squareMatrix; i++)
    {
        for (int j = i; j < squareMatrix; j++)
        {
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
        
    }

for (int i = 0; i < squareMatrix; i++)
    {
        for (int j = 0; j < squareMatrix; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    

}