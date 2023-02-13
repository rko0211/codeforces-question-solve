    int primesfactor[x];
    for (int i = 0; i < x; i++)
    {
        primesfactor[i] = i;
    }
    // Using sieve of eratosthenesis we will find each factor
    for (int i = 2; i < x; i++)
    {
        if (primesfactor[i] == i)
        {
            for (int j = i * i; j < x; j += i)
            {
                if (primesfactor[j] == j)
                {
                    primesfactor[j] = i;
                }
            }
        }
    }