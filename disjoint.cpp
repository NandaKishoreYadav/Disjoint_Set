// Using Structures Union by size

struct DSU{
    vector<int> parent,size;
    DSU(int n){
        parent.resize(n+1);
        size.resize(n+1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
            size[i]=1;
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
            if(size[x]<size[y])
                swap(x,y);
            parent[y]=x;
            size[x]+=size[y];
        }
    }
}; 
