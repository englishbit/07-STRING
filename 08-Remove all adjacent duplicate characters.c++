#include<iostream>
#include<stack>
using namespace std;
int main(){
    //logic for taking input
    string s;
    cin>>s;
    
    stack<char>stak;
    stak.push(s[0]);
    for(int i=1;i<s.length();i++){
        if(!stak.empty() && stak.top()==s[i]){
            stak.pop();
            
        }else{
            stak.push(s[i]);
        }
    }


    while(!stak.empty()){
        cout<<stak.top()<<" ";
        stak.pop();
    }
    cout<<endl;
    return 0;

}

