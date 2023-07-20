#include <bits/stdc++.h>
using namespace std;
int main()
{

    unordered_map<string, int> ump;
    vector<string> vs;
    int ans = 0;
       string s1;
       
 while(getline(cin,s1))
    {
     
        if (s1[0] == '+')
        {
            string s ="";
            for(int i=1;i<s1.size();i++){
                s+=s1[i];
            }
            if (ump[s] == 0)
            {
                ump[s] =1;
            }
        }
        else if (s1[0] == '-')
        {
             string s ="";
            for(int i=1;i<s1.size();i++){
                s+=s1[i];
            }
            if (ump[s] == 1)
            {
                ump[s] = 0;
            }
        }
        else
        {
            int len = 0;
            int j = s1.size() - 1;
            while (s1[j] != ':')
            {
                len++;
                j--;
            }
        
            for (auto &it : ump)
            {
                if (it.second > 0)
                {
                    ans += len;
                }
                
            }
        }
     
    }
    cout << ans << endl;

    return 0;
}