

    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int n;
            cin >> n;
            int x = 1;
            int y = n * n;
            int a[n][n];
            int i;
            for (i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    for (int j = 0; j < n; j++)
                    {
                        if (j % 2 == 0)
                            a[i][j] = x++;
                        else
                            a[i][j] = y--;
                    }
                }
                else
                {
                    for (int j = n-1; j >=0; j--)
                    {
                        if (j % 2 == 0)
                            a[i][j] = y--;
                        else
                            a[i][j] = x++;
                    }
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                    cout << a[i][j] << " ";
                cout << endl;
            }
        }
        return 0;
    }



