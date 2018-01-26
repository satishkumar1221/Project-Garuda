/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
#include<vector>
#include<memory>
#include<map>
#include<algorithm>
#include<string>
//#define 32658 errorcode;
void printvector(vector<int>&arr)
{
       vector<int>::iterator itr;
       for(itr=arr.begin();itr!=arr.end();itr++)
       {
           cout<<*itr<<endl;
       }
}

int maxnumbersinarray(vector<int>&arr)
{
    sort(arr.begin(),arr.end(),greater<int>());
    return arr[0];
}

string findreqelement(vector<int>&arr,int &k)
{
    sort(arr.begin(),arr.end());
    //use binary search//
    if(binary_search(arr.begin(),arr.end(),k))
    {
        return("element found");
    }
    else
       return("element not found");
}
int searchfortheindex(vector<int>arr, int z )
{
    int j=0;
    // not an efficient solution interms of space complexity but efficient interms of time complexity" //
    map<int,int>sof;
    map<int,int> :: iterator itr;
    for(int i=0;i<arr.size();i++)
    {
        sof.insert(pair<int,int>(j,arr[i]));
        j++;
    }
    // search for the map using iterator//
    for(itr= sof.begin();itr!=sof.end();itr++)
    {
        if(itr->second == z)
        {
            return(itr->first);
        }

    }
    return(-1);
}
int main()
{
    cout<<"Hello World"<<endl;
    int cas;
    // auto arr = make_shared<vector<int>>();
    cout<<"enter the required case"<<endl;
    cin>>cas;
     vector<int>arr;
            arr.push_back(13);
            arr.push_back(14);
            arr.push_back(10);
            arr.push_back(3);
            arr.push_back(2);
    switch(cas)
    {

    case 1:{
    cout<<"max element in an array"<<endl;
    // to use the shared pointer and weak pointer we need to have classes //
             printvector(arr);
             auto z = maxnumbersinarray(arr);
             cout<<z;
    }
            break;
            {
    case 2 : cout<<"search for an element inside the array"<<endl;
             cout<<"enter the requred number to search"<<endl;
             int k ;
             cin>> k;
             // can be made even simople if we write classes for everything//
             auto s = findreqelement( arr,k);
             cout<<s;
            }
            break;

    case 3 :{
             cout<<"index of the element in the binary search or in the given shifted array"<<endl;
             cout<< "refer pramp programming question one"<<endl;
             vector<int>arr = {4,8,9,14,18,19};
             int k;
             cout<<"enter the element to be searched"<<endl;
             cin>>k;
             cout<<"this solution is using maps"<<endl;
             auto z = searchfortheindex(arr,k);
             cout<<"the index position is"<<z;
              }
             break;
    default : cout<<"enter the given options Alligator!!!"<<endl;
    //have to point to a class or create a new vector// // //
    }

    return 0;
}
