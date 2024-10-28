#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    // Calculate the sum
    int sum = a + b;
    
    // Convert the sum to a string and append "1"
    string result = to_string(sum) + "1";
    
    // Print the result as an integer
    cout << result << endl;
    
    return 0;
}
