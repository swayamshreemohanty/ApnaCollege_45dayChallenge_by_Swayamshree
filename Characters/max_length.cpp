#include"iostream"
using namespace std;

int main()
{
    int size;
    cin>>size;
    cin.ignore();
    char arr[size+1];

    cin.getline(arr,size);
    cin.ignore();

    //find the largest word from the array

    int i,current_count=0,max_count=0;
    // for (int i = 0; i < size; i++)
    while(1)
    {
        if (arr[i]==' '|| arr[i]=='\0')
        {
            if (current_count>max_count)
            {
                max_count=current_count;
            }
            current_count=0;
        }
        else
        {
            current_count++;
        }   

        if (arr[i]=='\0')
        {
            break;
        }
        i++;
    }

    cout<<max_count;
    return 0;
}