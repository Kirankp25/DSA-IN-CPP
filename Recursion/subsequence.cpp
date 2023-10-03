#include <iostream>
#include <string>

using namespace std;

void generateSubsequences(string input, string output, int index) {
    // Base case: When the index reaches the length of the input string
    if (index == input.length()) {
        // Check if the output string is not empty to avoid printing the empty string
        if (!output.empty()) {
            cout << output << " ";
        }
        return;
    }

    // Include the current character in the output
    generateSubsequences(input, output + input[index], index + 1);

    // Exclude the current character from the output
    generateSubsequences(input, output, index + 1);
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string output = ""; // Initialize the output string as empty
    generateSubsequences(input, output, 0);

    return 0;
}
