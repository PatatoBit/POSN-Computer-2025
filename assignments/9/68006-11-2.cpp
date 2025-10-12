#include <bits/stdc++.h>
using namespace std;
#define STACKSIZE 105

struct Stack {
    int top = -1;
    int items[STACKSIZE] = {-2};

    bool isEmpty() {
        if (top == -1) return 1;
        else return 0;
    }

    void push(int x) {
        if (top == STACKSIZE - 1) {
            cout << "Stack overflow" << endl;
            exit(1);
        } else {
            items[++top] = x;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
            exit(1);
        } else {
            top--;
        }
    }
};

int main() {
    string s;

    cout << "s = ";
    cin >> s;
    cout << endl;

    string specials = "[](){}";
    Stack s1;

    for(char character: s) {
        if (specials.find(character) != string::npos) {
            if ((s1.items[s1.top] == '[' && character == ']') || (s1.items[s1.top] == '(' && character == ')') || (s1.items[s1.top] == '{' && character == '}')) {
                // cout << "Found match, popping..." << character << ":" << s1.top<< endl;
                s1.pop();
            } else {
                s1.push((int)character);
            }

        }
    }

    if (s1.top == -1) {
        cout << "true";
    } else {
        cout  << "false";
    }



    return 0;
}
