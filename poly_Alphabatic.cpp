#include <bits/stdc++.h>
using namespace std;
#include<string.h>

vector<int>ct;


 encription(string msg,string key)
{

    int len1=msg.length();
    int len2=key.length();

    int k[len2],m[len1];
    //string ct;

    for(int i=0;i<len1;i++ )
    {
        m[i]=msg[i]-97;
    }

    for(int i=0;i<len2;i++ )
    {
        k[i]=key[i]-97;
    }

    cout<<"encripted msg is:"<<endl;

    for(int i=0;i<len1;i++)
    {
        int x=(m[i]+k[i])%26;
        ct.push_back(x);

        printf("%c",ct[i]+'A');
    }




}

decription(string msg,string key)
{

    int len1=msg.length();
    int len2=key.length();

    int k[len2],m[len1];
    //string ct;

    for(int i=0;i<len1;i++ )
    {
        m[i]=msg[i]-97;
    }

    for(int i=0;i<len2;i++ )
    {
        k[i]=key[i]-97;
    }

    cout<<endl;

    cout<<"decripted msg is:"<<endl;

    for(int i=0;i<len1;i++)
    {
        int x=(ct[i]-k[i]+26)%26;//char x = (cipher_text[i] - key[i] + 26) %26;
        //ct[i]=x;

        printf("%c",x+'a');
    }




}

int main(void)
{
    string msg;
    string key;
    string encripted;
    string decripted;

    cout<<"enter your msg:"<<endl;

    cin>>msg;

    cout<<"enter your key:"<<endl;

    cin>>key;

    encription(msg,key);
    decription(msg,key);









}
