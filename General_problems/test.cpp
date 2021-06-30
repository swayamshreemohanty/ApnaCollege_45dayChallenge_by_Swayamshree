#include"iostream"
using namespace std;


int sum(int n)
{
    int answer=0;
    for (int i = 1; i <=n; i++)
    {
        answer+=i;
    }
    return answer;
    
}

void decimalTobinary(int input)
{
    while (input>0)
    {
        int quotient=input/2;
        int remainder=input%2;
        cout<<remainder;
        
        input=quotient;
    }
    
}

void binaryTodecimal(int n)
{

}

int main()
{
    int n=0;
    cin>>n;
    // cout<<sum(n);

    // decimalTobinary(n);
    binaryTodecimal(n);
}