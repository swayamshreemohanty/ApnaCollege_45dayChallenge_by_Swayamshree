#include"iostream"
#include"string"
#include"algorithm" //is used for sort(string.start(), string.end())
using namespace std;

int main()
{
    // string str;          //String declaration     
    // cin>>str;            //Take the complete sentence as input but without space
    // string str (cin>>)="Swayamshree";    //cout="Swayamshree"
    // string str (cin>>)="Swayamshree Mohanty";    //cout="Swayamshree"

    // getline(cin,str);                        //Take the complete sentence as input. 
    // string str(5, 'n');                      //print "n" 5 times
// ***********************************
    // string s1="fam";
    // string s2="ily";
    // cout<<s1+s2;
// ***********************************
    // string s1="fam";
    // string s2="ily";
    // s1.append(s2);                           //append() is used to combine two strings as per user choice
    // cout<<s1;
//*************************************
    // string str="Swayamshree";
    // cout<<str[2];
//*************************************
    // string str="Swayamshree Mohanty";        //size() and length() is used to determind how many elements present in the string.
    // for (int i = 0; i < str.length(); i++)
    // {
    //     cout<<str[i];    //Swayasmhree Mohanty
    // }
//**************************************
    // string abc="Swayamshree Mohanty";
    // cout<<abc;  //cout=Swayamshree Mohanty
    // abc.clear();                             //clear() is used to clear the string from the identifier
    // cout<<abc;  //cout=" "
//**************************************
    // string s1="abc";
    // string s2="xbc";
    // if (!s1.compare(s2))                     //compare() is used to find the greater and smaller string from two strings 
    // {
    //     cout<<"Two strings are same";
    // }
    // else
    // {
    //     cout<<"Two strings are not same";
    // }
//***************************************
    // string s1="abc";
    // s1.clear();         // clear() is used to clear the string from the variable/identifier
    // if (s1.empty())
    // {
    //     cout<<"This string is empty";
    // }
    // else
    // {
    //     cout<<"This string is not empty";
    // }
    
//***************************************

    // string s1="Swayamshree Mohanty";
    
    // s1.erase(3,3);           //erase(from_where, how_many) is used to remove the elements
    // cout<<s1;

//****************************************

    // string s1="Swayamshree";

    // cout<<s1.find("ree");       //find("element_in_the_string")  is used to find the element

//****************************************
    // string s1="abef";
    // cout<<s1.insert(2,"cd");        //insert(position,"Element want to add") is used to insert element at desire index

//****************************************
    // string s1="Swayamshree";
    // cout<<s1.substr(0,6);            // substr(start_index, no_of_elements), is used to extract the elements from a whole string

//****************************************
    // string s="420";
    // int x= stoi(s);
    // cout<<x;
//*****************************************

    // int x=420;
    // cout<<to_string(x)+"2";
//******************************************

    // string s="dbcaef";
    // sort(s.begin(), s.end());   //sort(string.begin(), string.end()), here begin() and end() is used to identify the start and end iterator of the string
    // cout<<s;


    return 0;
}