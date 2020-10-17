//Increasing Array Solution Of Cses

#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define rep(i,n) for (i = 0; i < n; i++) 
using namespace std;
 
int main()
{
     ll int n , count=0 , x=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
        x=a[i]-a[i+1];
        a[i+1]=a[i+1]+x;
        count+=x;
        }
        
    }
    cout<<count;
    return 0;
}
