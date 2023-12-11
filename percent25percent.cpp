class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int val = (float(0.25*arr.size()));
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto &it:m){
            cout<<it.first<<" "<<it.second<<endl;
          if(it.second> val){
              return it.first;
          }
        }
        return 0;
    }
};
