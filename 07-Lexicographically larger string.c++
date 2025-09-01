#include<iostream>
using namespace std;
int main(){
    string s1;
    string s2;

    getline(cin,s1);
    getline(cin,s2);

    for(int i=0;i<min(s1.length(),s2.length());i++){
        if(s1[i]<s2[i]){
            cout<<"s2 is larger"<<endl;
            return 0;
        }

        if(s1[i]>s2[i]){
            cout<<"s1 is larger"<<endl;
            return 0;
        }
    }

    if(s1.length()>s2.length()){
        cout<<"s1 is larger"<<endl;
    }else if(s2.length()>s1.length()){
        cout<<"s2 is larger"<<endl;
    }else{
        cout<<"they are equal"<<endl;
    }

    













    return 0;
}