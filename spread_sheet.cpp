#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{

    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        bool fcase = false;
        bool scase = false;
        if (s[0] == 'R' && (s[1] >= '0' && s[1] <= '9'))
        {
            int i;
            for (i = 1; i < s.size(); i++)
            {
                if (s[i] == 'C')
                {
                    break;
                }
                if (s[i + 1] >= '1' && s[i] <= '9')
                {
                    fcase = true;
                }
            }
        }
        else
        {
            scase = true;
        }
        if (fcase)
        {
            string temp = "";
            string ans = "";
            int i;
            for (i = 1; i < s.size(); i++)
            {
                if (s[i] == 'C')
                    break;
                else
                {
                    temp += s[i];
                }
            }
            int base10Number = 0;
            for (int j = s.size() - 1; j > i; j--)
            {
                base10Number = 10 * base10Number + (s[j] - '0');
            }
            string zzNumber;
            int base = 26; // ZZ uses base 26

            while (base10Number > 0)
            {
                int remainder = (base10Number - 1) % base;
                char digit = 'A' + remainder;
                zzNumber = digit + zzNumber;
                base10Number = (base10Number - 1) / base;
            }
            ans += zzNumber;
            ans += temp;

            cout << ans << endl;
        }

        else
        {
            string temp = "";
            string ans = "";
            int i;
            for (i = s.size() - 1; i >= 0; i--)
            {
                if (s[i] >= '0' && s[i] <= '9')
                {
                    temp += s[i];
                }
                else
                {
                    break;
                }
            }

            int size = i + 1;
            ans += 'R';
            reverse(temp.begin(), temp.end());
            ans += temp;
            ans += 'C';


            int base = 26; // ZZ uses base 26
            int power = 1;
            int base10 = 0;
            string zzNumber = "";
            for (int j = 0; j <=i; j++)
            {
                zzNumber += s[j];
            }

            for (int i = zzNumber.size() - 1; i >= 0; i--)
            {
                char digit = zzNumber[i];
                int value = digit - 'A' + 1;
                base10 += value * power;
                power *= base;
            }
     
            string str ="";
            while(base10>0){
               int rem = base10%10;
                   str+=(rem+'0'); 
                base10/=10;
            }
            reverse(str.begin(),str.end());
            ans+=str;
            cout<<ans<<endl;
        }
    }

    return 0;
}