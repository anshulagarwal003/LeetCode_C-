#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

// contains duplicate in an array
int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }


    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        if(mp[arr[i]]==1)
        {
            cout<<"true"<<endl;
            return 0;
        }
        mp[arr[i]]=1;
    }

}