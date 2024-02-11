

#include <bits/stdc++.h>
using namespace std;
using ll=long long;
int prefix[10005][31];
int main()
{
    //std::cout<<"Hello World";
      int t;
      cin>>t;
      while(t--){
          int n, q;
          int i;
          cin>>n;
          for(i=0; i<=n; i++){
              for(int j=0; j<31; j++){
                  prefix[i][j]=0;
              }
          }
          
          for(i=1; i<=n; i++){
              int a;
              cin>>a;
              int cnt=0;
              while(a>0){
                  prefix[i][cnt]=a%2;
                  cnt++;
                  a /=2;
              }
          }
          
          for(i=1; i<=n; i++){
              for(int j=0; j<31; j++){
                  prefix[i][j] +=prefix[i-1][j];
              }
          }
          
          cin>>q;
          while(q--){
              int l, r;
              cin>>l>>r;
              double total=(r-l+0.1)/(2);
              ll x1=0, x2=0, x3=0;
              for(int i=0; i<31; i++){
                  int p=prefix[r][i]-prefix[l-1][i];
                  if(p<total){
                      x1 +=(1LL<<i);
                  }
                  if(p !=(r-l+1)){
                      x2 +=(1LL<<i);
                  }
                  
                  if(p){
                      x3 +=(1LL<<i);
                  }
              }
              
              ll ans=x1+x2+x3;
              cout<<ans<<endl;
              
          }
          
      }

    return 0;
}
