#include <iostream>
using namespace std;
int main() {
    int a[1000],b[1000];
    int n1;
    cin>>n1;
    for(int i=0;i<n1;i++)
    {
        cin>>a[i];
    }
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++)
    {
        cin>>b[i];
    }
    int m=max(n1,n2);
    int i=n1-1;
    int j=n2-1;
    int k=m-1;
    int ans[m];
    int carry=0;
    while(k>=0)
    {
        int sum=carry;
        if(i>=0)
        {
            sum+=a[i];

        }
        if(j>=0)
        {
            sum+=b[j];
        }
        int q=sum/10;
        carry=q;
        int r=sum%10;
        ans[k]=r;
        k--;
        i--;
        j--;
    }
    if(carry!=0)
    {
        cout<<carry<<","<<" ";
    }
    for(int i=0;i<m;i++)
    {
        cout<<ans[i]<<","<<" ";
    }
    cout<<"END"<<endl;
    
}
