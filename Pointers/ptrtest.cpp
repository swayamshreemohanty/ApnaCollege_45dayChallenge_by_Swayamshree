#include"iostream"
using namespace std;

int main()
{
    int a=101;
    int *ptra=&a;

    int **ptra2=&ptra;
    int ***ptra3=&ptra2;

    cout<<***ptra3;
}