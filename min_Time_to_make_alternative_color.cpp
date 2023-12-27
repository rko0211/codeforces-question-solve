class Solution {
public:
    int minCost(string colors, vector<int>& need) {
        int ans =0;
        char lastchar =colors[0];
        int lastIndex =0;
        for(int i=1;i<colors.size();i++){
          if(colors[i]==lastchar){
              if(need[i]>=need[lastIndex]){
                  ans+=need[lastIndex];
                  lastIndex  = i;
              }
              else{
                  ans+=need[i];
                  // lastIndex = i;
              }
          }
            else{
                lastchar = colors[i];
                  lastIndex = i;
            }
          
        }
        return ans;
    }
};
