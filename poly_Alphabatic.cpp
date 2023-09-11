#include <bits/stdc++.h>
using namespace std;
#include<string.h>

vector<int>ct;
vector<int>dct;


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

    for(int i=0;i<len1;i++)
    {
        int x=msg[i]-'A';
        dct.push_back(x);

        //printf("%c",ct[i]+'A');
    }

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
        int x=(dct[i]-k[i]+26)%26;
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
    string modkey;
    int i,j;

    int choice;
    cout<<"1:encryption   "<<"2:decryption"<<endl;
    cin>>choice;


    cout<<"enter your msg:"<<endl;

    cin>>msg;

    cout<<"enter your key:"<<endl;

    cin>>key;

    int msgLen=msg.length();
    int keyLen=key.length();

    //char modkey[msgLen];

     for(i=0,j=0; i < msgLen;i++,j++ ){
        if(j == keyLen){j = 0;}

        modkey=modkey+key[j];




    }





    if(choice==1)encription(msg,modkey);
    else if(choice==2)decription(msg,modkey);
    else cout<<"invalid choice";









}
