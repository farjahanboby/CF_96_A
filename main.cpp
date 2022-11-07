#include <iostream>

using namespace std;

int main()
{
    int i, count1=1;
    string s;
    cin>>s;
    for(i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1])
            count1++;
        else count1=1;
        if(count1==7){
        cout<<"YES"<<endl;
        return 0;
        }

    }
        cout<<"NO"<<endl;

    return 0;
}
