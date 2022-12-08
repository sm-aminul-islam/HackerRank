#include<bits/stdc++.h>
using namespace std;
int MaxNum(int a,int b,int c,int d)
{
    int ans=max(a,max(b,max(c,d)));
    return ans;
}
int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   cout<<MaxNum(a,b,c,d)<<"\n";

    return 0;
}
