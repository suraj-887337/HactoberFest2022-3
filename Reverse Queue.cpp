#include <bits/stdc++.h>
using namespace std;


void reverseQueue(queue<int> &input) {
	// Write your code here
      stack<int> Stack;
    while (!input.empty()) {
        Stack.push(input.front());
        input.pop();
    }
    while (!Stack.empty()) {
        input.push(Stack.top());
        Stack.pop();
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        queue<int> q;
        int size;
        cin >> size;

        for (int i = 0, val; i < size; i++) {
            cin >> val;
            q.push(val);
        }

        reverseQueue(q);
        while (!q.empty()) {
            cout << q.front() << " ";
            q.pop();
        }

        cout << "\n";
    }
}
