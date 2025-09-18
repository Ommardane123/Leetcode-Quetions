#include <iostream>
#include <string>
using namespace std;

// Function to find length of last word in a string
int lengthOfLastWord(string s) {
    int n = s.size();
    int i = n - 1;

    // Step 1: Skip trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    int count = 0;
    int j = i;

    // Step 2: Count characters of the last word
    while (j >= 0 && s[j] != ' ') {
        count++;
        j--;
    }

    // Step 3: Return length of last word
    return count;
}

int main() { 
    // Example input
    string s = "   fly me   to   the moon  ";

    // Call function
    int result = lengthOfLastWord(s);

    // Print result
    cout << "Length of last word = " << result << endl;

    return 0;
}
