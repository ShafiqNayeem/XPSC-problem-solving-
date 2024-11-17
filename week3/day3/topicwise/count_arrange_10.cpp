#include <bits/stdc++.h>
using namespace std;

// Function to count anagrams of `pat` in `txt`
int search(string pat, string txt) {
    int m = pat.size();  // Length of the pattern
    int n = txt.size();  // Length of the text

    if (m > n) return 0; // If pattern is longer than text, no anagrams are possible

    // Frequency arrays for pattern and the current window
    vector<int> patFreq(26, 0), windowFreq(26, 0);

    // Fill frequency array for the pattern
    for (char c : pat) {
        patFreq[c - 'a']++;
    }

    // Fill frequency array for the first window in the text
    for (int i = 0; i < m; i++) {
        windowFreq[txt[i] - 'a']++;
    }

    // Initialize the count of anagrams
    int count = 0;

    // Check if the first window matches the pattern frequency
    if (patFreq == windowFreq) {
        count++;
    }

    // Slide the window over the text
    for (int i = m; i < n; i++) {
        // Add the new character to the window
        windowFreq[txt[i] - 'a']++;
        // Remove the old character from the window
        windowFreq[txt[i - m] - 'a']--;

        // Check if the current window matches the pattern frequency
        if (patFreq == windowFreq) {
            count++;
        }
    }

    return count;
}

int main() {
    string txt, pat;

    // Input text and pattern
    // cout << "Enter text: ";
    cin >> txt;
    // cout << "Enter pattern: ";
    cin >> pat;

    // Call the search function and output the result
    int result = search(pat, txt);
    cout << result << endl;

    return 0;
}
