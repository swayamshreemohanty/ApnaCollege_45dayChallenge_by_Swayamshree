//Determine the length of the longest contiguous arithmetic subarray

#include"iostream"
using namespace std;


void arithmeticSubarray(int a[], int size)
{

    //it stores the arithmetic number of the subarray
    int previous_data=a[1]-a[0],j=2;

    //it is the counter for the no. of arithmetic subarray
    int current_data=2;   

    //It is stores the final counter number after the loop      
    int final_answer=2;

    while (j<size)
    {
        //case1
        if(previous_data== (a[j]-a[j-1]))
        {

            //update the counter of the contiguos arthmetic subarray
            current_data++;
        }

        //case2
        else if (previous_data!=(a[j]-a[j-1]))
        {
            //update the previous data
            previous_data=a[j]-a[j-1];
            
            //reset the current data
            current_data=2;
        }
        
        //it stores the final counter number of arithmetic subarray by 
        //comparing the greatest number between final_answer and current_data
        final_answer=max(final_answer,current_data);

        j++;
    }

        cout<<final_answer;
    
}

int main()
{
    int size;
    cin>>size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cin>>a[i];
    }
    
    arithmeticSubarray(a,size);
}