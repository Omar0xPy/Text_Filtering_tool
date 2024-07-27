#include<iostream>
#include<string>
#include<cstdlib>
#include<cstring>
using namespace std;

int main()
{
    int last=0;
    string s;
    string c;
    cout<<"Enter some text:"<<endl;
    getline(cin,s);
    cout<<"Text to be filtered:"<<endl;
    cin>>c;

    while(s.find(c,last)!=string::npos)
    {
        last=s.find(c);
        s.erase(last,c.size());
    }

    cout<<s<<endl;
}