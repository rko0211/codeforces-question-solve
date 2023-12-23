class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>>us;
        int x =0,y =0;
        us.insert({x,y});
        for(int i=0;i<path.size();i++){
            if(path[i]=='N'){
                y++;
            }
            else if(path[i]=='S'){
                y--;
            }
            else if(path[i]=='E'){
                x++;
            }
            else if(path[i]=='W'){
                x--;
            }
            int prev_size = us.size();
            us.insert({x,y});
            if(prev_size==us.size()){
                return true;
            }
        }
        return false;
    }
};
