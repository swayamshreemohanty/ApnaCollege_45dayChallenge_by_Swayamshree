#include"iostream"
using namespace std;

int main()
{
    int row,colum=0;
    cin>>row>>colum;
    int a[row][colum];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colum; j++)
        {
            cin>>a[i][j];
        }
        
    }


    //Traverse in spiral way

    int row_start,colum_start=0;
    int row_end=row-1;
    int colum_end=colum-1;

    while ((row_start<=row_end) && (colum_start<=colum_end))
    {
        //Traverse over the upper colum from left to right
        for (int col = colum_start; col <= colum_end; col++)
        {
            cout<<a[row_start][col]<<" ";
        }
        row_start++;

        //Traverse over the last colum from top to bottom
        for (int rw = row_start; rw <=row_end ; rw++)
        {
            cout<<a[rw][colum_end]<<" ";
        }
        colum_end--;

        //Traverse over the bottom row from right to left
        for (int col = colum_end; col >= colum_start; col--)
        {
            cout<<a[row_end][col]<<" ";
        }
        
        row_end--;

        //Traverse over the left row from buttom to top (row_start=1)
        for (int rw = row_end; rw >= row_start; rw--)
        {
            cout<<a[rw][colum_start]<<" ";
        }
        colum_start++;
        
    }
    
}