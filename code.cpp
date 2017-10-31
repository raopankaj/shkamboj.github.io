#include<bits/stdc++.h>
#define ll long long
using namespace std;
const ll int siz=3e5+4;
int main()
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    string a,b;
    cin>>a>>b;
    ll int arr[25];
    ll int x=a.size(),y=b.size();
    int p=0,q=1;
    if(a.size()>b.size()){
      y=a.size();
      x=b.size();
      p=1;
      q=0;
    }
    for(int i=1;i<=x;i++){
      if(p==1){
        arr[y-i]=(a[y-i]-48+b[x-i]-48)%10;
      }
      if(q==1){
        arr[y-i]=(b[y-i]-48+a[x-i]-48)%10;
      }
    }
    for(int i=0;i<y-x;i++){
      if(p==1){
        arr[i]=a[i]-48;
      }
      if(q==1){
        arr[i]=b[i]-48;
      }
    }
    ll int z=0;
    for(int i=0;i<y-1;i++){
      if(arr[i]!=0 || z==1){
        printf("%lld", arr[i]);
        z=1;
      }
    }
    printf("%lld", arr[y-1]);
    printf("\n");
  }
}