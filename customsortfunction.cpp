#include <iostream>
#include<cstring>
#include<algorithm>
#include<cmath>

using namespace std;
string extractkeyfromstring(string str,int key)
{
    char*token=strtok((char*)str.c_str()," ");
    while(key>1)
    {
        token=strtok(NULL," ");
        key--;
    }
    return (string)token;
}
int stringtoint(string str)
{
   int num=0;
   int j=0;
   for(int i=str.size()-1;i>=0;i--)
   {
      int lastdigit=str[i]-'0';
      num=lastdigit*pow(10,j)+num;
      j++;
   }
  return num;
}
bool numericcompare(pair<string,string> s1,pair<string,string> s2)
{
    string key1 =s1.second;
    string key2=s2.second;
    return stringtoint(key1)<stringtoint(key2);
}
bool lexicoccompare(pair<string,string> s1,pair<string,string> s2)
{
    string key1 =s1.second;
    string key2=s2.second;
    return key1<key2;
}

int main() {
    int n;
    cin>>n;
    cin.get();
    string str[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,str[i]);
    }
    int key;
    cin>>key;
    

    string ordering;
    cin>>ordering;

    string reversal;
    cin>>reversal;

    pair<string,string>p[n];
    for(int i=0;i<n;i++)
    {
        p[i].first=str[i];
        p[i].second=extractkeyfromstring(str[i],key);
    }

    if(ordering=="numeric")
    {
        //consider the key as integer and then sort
        sort(p,p+n,numericcompare);
    }
    else
    {
        sort(p,p+n,lexicoccompare);
    }
    if(reversal=="true") {
		// reverse the sorted string array
		for(int i=0; i<n/2; i++) {
			swap(p[i], p[n-i-1]);
		}
    }   
    for(int i=0;i<n;i++)
    {
        cout<<p[i].first<<endl;
    }

}
