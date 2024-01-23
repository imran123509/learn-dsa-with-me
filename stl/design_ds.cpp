

#include <bits/stdc++.h>

using namespace std;


struct bag{
    int sumVal;
    map<int,int>mp;
    bag(){
        sumVal=0;
        mp.clear();
    }
    
    void insert(int x){
        mp[x]++;
        sumVal +=x;
    }
    
    void remove(int x){
        if(mp.find() ==mp.end()) return;
        mp[x]--;
        if(mp[x]==0){
            mp.erase(x);
        }
        sumVal -=x;
    }
    
    int getMin(){
        if(mp.empty()) return -1;
       return mp.begin()->first;
    }
    int getMax(){
        if(mp.empty()) return -1;
       return mp.rbegin()->first;
    }
    int getSum(){
       return sumVal; 
    }
    
    int getFreqofNextGreater(int x){
        auto it=mp.lower_bound(x);
        if(it==mp.end()) return 0;
        
        return it->second;
        
        
    }
     
    int getFreqofPrevSmaller(int x){
        auto it=mp.upper_bound(x);
        if(it==mp.begin()) return 0;
        
        it--;
        return it->second;
        
        
    }
};
int main()
{
   
    
    
}
