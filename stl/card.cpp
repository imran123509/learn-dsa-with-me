

#include <bits/stdc++.h>

using namespace std;
// we have find max diff bwtween two

 bool camp(pair<int,int>a, pair<int,int>b){
     return a.first+a.second>b.first+b.second;
 }
int main()
{
   int n;
   cin>>n;
   vector<pair<int,int>>a(n);
   for(int i=0; i<n; i++){
       cin>>a[i].first>>a[i].second;
   }
   
   sort(a.begin(), a.end(), camp);
   
   
    
    
}
