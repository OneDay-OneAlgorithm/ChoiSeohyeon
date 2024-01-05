#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    int checker = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        char checkContainer[101] = {0};

        cin >> checkContainer;
        int stringLen = strlen(checkContainer);
        bool isGroupWord = true;
        bool used[26] = {false};

        for (int j = 0; j < stringLen; j++) {
            char currentChar = checkContainer[j];

            if (j > 0 && currentChar != checkContainer[j - 1] && used[currentChar - 'a']) {
                isGroupWord = false;
                break;
            }

            used[currentChar - 'a'] = true;
        }

        if (isGroupWord) {
            checker++;
        }
    }

    cout << checker;

    return 0;
}
