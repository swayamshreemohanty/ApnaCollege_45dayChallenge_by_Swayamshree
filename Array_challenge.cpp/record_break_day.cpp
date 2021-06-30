#include"iostream"
using namespace std;

void insertArray(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    
}

int find_record_break_day(int a[],int size)
{
    int max_day=-1,counter=0;

    if(size==1)
    {
        cout<<a[0];
        return 0;
    }

    else{

        for (int i = 0; i < size; i++)
        {
            if ((a[i]>max_day) && (a[i]>a[i+1]))
            {
                counter++;
                max_day=max(max_day, a[i]);
            }
        }
        cout<<counter;
    }
    
}


int main()
{
    int size;
    cin>>size;
    int a[size+1];
    a[size]=-1;

    insertArray(a,size);
    find_record_break_day(a,size);

}