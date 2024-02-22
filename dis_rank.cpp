// Using Structures Union by rank

struct DSU{
    vector<int> parent,rank;
    DSU(int n){
        parent.resize(n+1);
        rank.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
            rank[i]=1;
        }
    }
    int find_set(int x){
        if(x==parent[x])return x;
        return parent[x] = find_set(parent[x]);
    }
    void union_set(int x,int y){
        x = find_set(x);
        y = find_set(y);
        if(x!=y){
            if(rank[x]<rank[y])
                swap(x,y);
            parent[y]=x;
            if(rank[x]==rank[y])
            rank[x]++;
        }
    }
}; 
