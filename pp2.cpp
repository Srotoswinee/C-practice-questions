/*Write a function CheckPassword(str) which will accept the string as an argument or parameter and validates the password. It will return 1 if the conditions are satisfied else it’ll return 0?
The password is valid if it satisfies the below conditions:
a. It should contain at least 4 characters.
b. At least 1 numeric digit should be present.
c. At least 1 Capital letter should be there.
d. Passwords should not contain space or slash(/).
e. The starting character should not be a number.*/
#include <iostream>
#include <cstring> // Include cstring for strlen
using namespace std;

int CheckPassword(char str[]) {
    int len = strlen(str);
    bool isDigit = false, isCap = false, isSlashSpace = false, isNumStart = false;

    // Check for minimum length
    if (len < 4)
        return 0;

    // Loop through each character in the password
    for (int i = 0; i < len; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            isDigit = true;
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            isCap = true;
        }

        // Check for spaces or slashes
        if (str[i] == ' ' || str[i] == '/') {
            isSlashSpace = true;
        }
    }

    // Check if the first character is a number
    isNumStart = (str[0] >= '0' && str[0] <= '9');

    // Return the combined result of all conditions
    return isCap && isDigit && !isSlashSpace && !isNumStart;
}

int main() {
    char password[100];
    cout << "Enter the password:" << endl;
    cin >> password;
    cout << "The output is:\n" << CheckPassword(password) << endl;
    return 0;
}
