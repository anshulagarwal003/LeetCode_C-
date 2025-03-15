#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main()
{
    string s1;
    cout<<"enter your string";
    cin>>s1;
    unordered_map <char,int> s3;
    char iterate_char;
    vector<char> charVector;
    int flag=1;
    int maxLen=0;
    for (int i=0;i<s1.size();i++)
    {
     iterate_char=s1[i];

     if (s3[iterate_char]==1 && s3.size()<maxLen){
        s3.clear();
     }
     s3[iterate_char]=1;
     maxLen=max(maxLen,s3.size());

    }
    string s2(charVector.begin(),charVector.end());
    cout<<"longest non-duplicate string is: "<<s2<<endl;
    return 0;
}