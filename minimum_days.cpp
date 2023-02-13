#include <bits/stdc++.h>
using namespace std;
int MinimumDays(int N, string S, int P[])
{
    // Consecutive_count to store the number of consecutive similar type character .
    int Consecutive_count = 0;

    // Count the number of consecutive similar type character.
    for (int i = 1; i < N; i++)
    {
        if (S[i] == S[i - 1])
        {
            Consecutive_count++;
        }
    }
    // If Count of consecutive similer type character is 0 then answer is 
    // also 0;
    if(Consecutive_count==0)
    {
        return 0;
    }
    // To find Minimum number of days required to get required string.
    // we have to iterate the Permutation array P.

    for (int i = 0; i < N; i++)
    {
        // Now we check whether we can change the string at s[p[i]].
       

        // index to store the value of permutation array ,P[i].
        int index = P[i];

        // If we get two consecutive similar character.
        if (index != 0 && S[index] == S[index - 1])
        {
            // Reduce the count of consecutive similar character.
            Consecutive_count--;
        }

        // If we get two consecutive similar character.
        if (index != N - 1 && S[index] == S[index + 1])
        {
            // Reduce the count of consecutive similar character.
            Consecutive_count--;
        }
        // Update the string value at the index.
        S[index] = '?';

        if (Consecutive_count == 0)
        {
           
            //   If At ith day Consecutive_count becomes 0 then.
            // We should return (i+1) as we have taken 0 based indexing,
            return (i + 1);
        }
    }
    // If no such above case happened then return -1 value,
    return -1;
}
int main()
{
    int N=4;
     
    string S = "abca";
    int P[] = {3,0,2,1};
    cout << "Minimum days required is : " << MinimumDays(N, S, P) << endl;

    return 0;
}