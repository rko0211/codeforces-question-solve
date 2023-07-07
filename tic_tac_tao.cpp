#include <iostream>
#include <vector>

using namespace std;

bool checkWinner(const vector<string>& field, char symbol) {
    // Check rows
    for (int i = 0; i < 3; i++) {
        if (field[i][0] == symbol && field[i][1] == symbol && field[i][2] == symbol) {
            return true;
        }
    }

    // Check columns
    for (int i = 0; i < 3; i++) {
        if (field[0][i] == symbol && field[1][i] == symbol && field[2][i] == symbol) {
            return true;
        }
    }

    // Check diagonals
    if ((field[0][0] == symbol && field[1][1] == symbol && field[2][2] == symbol) ||
        (field[0][2] == symbol && field[1][1] == symbol && field[2][0] == symbol)) {
        return true;
    }

    return false;
}

string getResult(const vector<string>& field) {
    if (checkWinner(field, 'X')) {
        return "X";
    } else if (checkWinner(field, 'O')) {
        return "O";
    } else if (checkWinner(field, '+')) {
        return "+";
    } else {
        return "DRAW";
    }
}

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        vector<string> field(3);
        for (int j = 0; j < 3; j++) {
            cin >> field[j];
        }

        cout << getResult(field) << endl;
    }

    return 0;
}
