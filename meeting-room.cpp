// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
bool sortBySecond(const pair<int, int> &a, const pair<int, int> &b) {
    return a.second < b.second;  
}
int main() {
    int t,n,start,end,count;
    vector<pair<int,int>> v;
    //test cases
    cin>>t;
    while(t--){
        //no of meetings   
        cin>>n;
        while(n--){
            cin>>start>>end;
            v.emplace_back(start,end);
        }
       sort(v.begin(), v.end(), sortBySecond);
       int a=v[0].second;
       count=1;
        for(int i=0;i<v.size()-1;i++){
           
            if(a<=v[i+1].first){
                count++;
                a=v[i+1].second;
            // cout<<count<<" ";
            }
        }
           
        
         cout<<count<<endl;
    }
    
    
     

    return 0;
}