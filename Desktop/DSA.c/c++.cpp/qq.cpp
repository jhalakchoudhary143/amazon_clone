#include <iostream>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

    int i = 0;
    while (str[i] != '\0') {
        // Skip spaces
        if (str[i] == ' ') {
            cout << " ";
            i++;
            continue;
        }

        // Find the end of the current word
        int start = i;
        while (str[i] != ' ' && str[i] != '\0') {
            i++;
        }
        int end = i - 1;

        // Print the word in reverse
        for (int j = end; j >= start; j--) {
            cout << str[j];
        }
    }

    return 0;
}