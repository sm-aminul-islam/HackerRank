#include<bits/stdc++.h>
using namespace std;
void Pointer(int *a,int *b)
{
   int temp = *a + *b;
    *b = *a - *b;
    *a = temp;
}

int main()
{
  int a,b;
  cin>>a>>b;
  Pointer(&a,&b);
  cout<<abs(a)<<"\n"<<abs(b)<<"\n";


    return 0;
}
