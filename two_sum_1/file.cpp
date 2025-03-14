#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;
int main()
{
    vector <int> V;
    int n;
    cout<<"enter array length";
    cin>>n;
    V.resize(n);
    cout<<"enter the array";
    for (int i=0;i<n;i++)
    {
        cin>>V[i];
    }
    int target;
    cout<<"enter the taget value";
    cin>>target;
    unordered_map<int,int> result;

    int complement;
    
    for (int i=0; i<n ;i++){
        complement=target-V[i];

        if (result.find(complement)!=result.end())
        {
            cout<<"Pair found: ("<<result[complement]<<","<<i<<")"<<endl;

        }

        result[V[i]]=i;

    }




    
    return 0;
}