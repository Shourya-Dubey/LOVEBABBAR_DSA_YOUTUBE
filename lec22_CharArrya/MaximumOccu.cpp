#include<iostream>
using namespace std;
char maxOccu(string s){
    char arr[26] = {0};
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        int number;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for(int i = 0; i<26; i++){
        if(maxi < arr[i]){
            maxi = arr[i];
            ans = i;
        }
    }
    return 'a' + ans;
}
main()
{
    string s;
    cout<<"Enter the String"<<endl;
    cin>>s;
    cout<<"maximum Occuring sting is -> "<<maxOccu(s)<<endl;
    return 0;
}