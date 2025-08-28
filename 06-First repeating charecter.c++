#include<iostream>
#include<set>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    set<char>myset;
    for(int i=0;i<s.length();i++){
        if(myset.find(s[i])!=myset.end()){
            cout<<s[i];
            return 0;
        }
        myset.insert(s[i]);
    }

    cout<<"No Repeted character found"<<endl;
    return 0;

}
