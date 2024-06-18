#include<iostream>
using namespace std;
string replaceSpace(string &s){
    string temp;
    for(int i = 0; i<s.length(); i++){
        if(s[i] == ' '){
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }else{
            temp.push_back(s[i]);
        }
    }
    return temp;
}

main()
{
    string s = "My Name Is Shourya";
    cout<<replaceSpace(s)<<endl;
    return 0;
}