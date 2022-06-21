#include <iostream>
#include<climits>
using namespace std;
int main() {
    int q;
    cin>>q;
    while(q--)
    {
     int n;
     cin>>n;
     int a[n];
     int minimum=INT_MAX;
     int index=0;
     for(int i=0;i<n;i++)
     {
        cin>>a[i];
        if(a[i]<minimum)
        {
            minimum=a[i];
            index=i;
        }
     }
      if(a[index]<a[index-1])
      {
        cout<<index<<endl;
      }
     else{
           cout<<"0"<<endl;;
         }
 } 

}
