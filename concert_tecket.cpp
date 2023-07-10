#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int findTicketPrice(const vector<int>& ticketPrices, int customerPrice) {
    int low = 0;
    int high = ticketPrices.size() - 1;
    int closestPrice = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (ticketPrices[mid] <= customerPrice) {
            closestPrice = ticketPrices[mid];
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return closestPrice;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> ticketPrices(n);
    for (int i = 0; i < n; i++) {
        cin >> ticketPrices[i];
    }

    vector<int> customerPrices(m);
    for (int i = 0; i < m; i++) {
        cin >> customerPrices[i];
    }

    sort(ticketPrices.begin(), ticketPrices.end());

    for (int i = 0; i < m; i++) {
        int ticketPrice = findTicketPrice(ticketPrices, customerPrices[i]);

        if (ticketPrice == -1) {
            cout << -1 << endl;
        } else {
            cout << ticketPrice << endl;
            ticketPrices.erase(lower_bound(ticketPrices.begin(), ticketPrices.end(), ticketPrice));
        }
    }

    return 0;
}
