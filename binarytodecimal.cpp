// binary to decimal
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0)
    {
        int r=n%10;
       ans=ans+r*pow(2,i);
       n=n/10;
       i++;
    }
    cout<<ans<<endl;
	return 0;

}
