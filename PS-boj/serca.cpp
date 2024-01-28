#include <iostream>
using namespace std;

void printHeart() {
    cout << " @@@   @@@ " << endl;
    cout << "@   @ @   @" << endl;
    cout << "@    @    @" << endl;
    cout << "@         @" << endl;
    cout << " @       @ " << endl;
    cout << "  @     @  " << endl;
    cout << "   @   @   " << endl;
    cout << "    @ @    " << endl;
    cout << "     @     " << endl;
}

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        printHeart();
    }

    return 0;
}
