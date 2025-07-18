#include <iostream>
#include <string>
using namespace std;

void drawRightArrow(char body, char head) {
    const int BODY_WIDTH = 5;
    const int headCounts[] = {1,2,3,4,3,2,1};

    for (int i = 0; i < 7; ++i) {
        int n = headCounts[i];
        if (n < 3) {
            cout << string(BODY_WIDTH, ' ')
                 << string(n, head)
                 << '\n';
        } else {
            cout << string(BODY_WIDTH, body)
                 << string(n, head)
                 << '\n';
        }
    }
}

int main() {
    int b, h;
    cin >> b >> h;
    char body = char('0' + b);
    char head = char('0' + h);
    drawRightArrow(body, head);
    return 0;
}
