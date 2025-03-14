#include <iostream>
#include <string>

using namespace std;

int main(){
    cout<<"enter s1";
    string s1;
    cin>>s1;
    cout<<"enter s2";
    string s2;
    cin>>s2;
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
    return 0;
}