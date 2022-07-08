/*
// 1st process ----> using recurssion 
 #include<bits/stdc++.h>
using namespace std ;
vector<vector<int>> ans;
void nexTpermutation(vector<int>&a,int idx){
if(idx==a.size()){
    ans.push_back(a);
    return;
}
for(int i=idx;i<a.size();i++){
swap(a[i],a[idx]);
nexTpermutation(a,idx+1);

}
return;
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
 cout<<"Enter the vector element :"
    for(auto &i:a)
    cin>>i;
    nexTpermutation(a,0);
for(auto v:ans){
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0 ;
}

// T.C  --->O(n!)
//S.C  ---->O(n)
*/
/*  You can run Both code .  I have shared both two process in a single file */

// 2nd process ---> Using C++ stl -->next_permutation()
#include<bits/stdc++.h>
using namespace std ;
vector<vector<int>>ans;
int main(){
    int n;cin>>n;
    vector<int>a(n);
    cout<<"Enter Vector element :"<<endl;
    for(auto &i:a)
    cin>>i;
    do{
ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
    cout<<"Permutations of vector elements :"<<endl;
    for(auto v:ans){
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
}
return 0 ;
}

// T.C ----> O(n!)
