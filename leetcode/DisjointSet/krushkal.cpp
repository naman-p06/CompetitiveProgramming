#include <bits/stdc++.h>
using namespace std;

class DisjointSet{
    vector<int>rank,parent;
    public:
    DisjointSet(int n){
        rank.resize(n,0);
        parent.resize(n);
        for(int i=0;i<n;i++){
            parent[i]=i;
        }
    }
    int findParent(int u){
        if(u!=parent[u]){
            parent[u]=findParent(parent[u]);
        }
        return parent[u];
    }
    void unite(int u,int v){
        int pu=findParent(u);
        int pv=findParent(v);
        if(rank[pu]<rank[pv]){
            parent[pu]=pv;
        }
        else if(rank[pu]>rank[pv]){
            parent[pv]=pu;
        }
        else{
            parent[pu]=pv;
            rank[pv]++;
        }
    }
};

int main(){
long long t;
cin>>t;
while(t--){

}
return 0;
}