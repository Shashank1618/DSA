#include<bits/stdc++.h>
using namespace std;
bool isPowerOf2(int n){
    if(n<=0)
    return false;
for(int i=0;i<31;i++){
    if((1<<i)==n)
    return true;
}
return 0;
}
int main(){
int n;
    //take input from user
    cout<<"Enter number: ";
    cin>>n;
    // 1 for True
    // 0 for False
    cout<<isPowerOf2(n);
    return 0;
}
