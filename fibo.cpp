#include <iostream>
using namespace std;

int fibo(int n) {
    if (n == 0 || n == 1 ) {
        return n;
    } else {
        return fibo(n-1) + fibo(n-2);
    }
}

int main() {
    int n;
    int i=0;
    string result = "";
    cout <<"Enter a number" << endl;
    cin >> n;
    while (i<=n) {
        result += std::to_string(fibo(i)) + " ";
        i++;
    }
    cout << result << endl;
    return 0;
}