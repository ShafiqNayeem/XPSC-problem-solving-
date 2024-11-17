#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, Z;
    cin >> X >> Y >> Z;

   
    double teamPoints = X + 0.5 * Y;
    double opponentPoints = Z + 0.5 * Y;

    
    int remainingGames = 4 - (X + Y + Z);

    
    double mxAdditionalPoints = remainingGames;

   
    if (teamPoints + mxAdditionalPoints > opponentPoints) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}