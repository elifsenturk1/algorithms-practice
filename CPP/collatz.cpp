#include <iostream>
using namespace std;

// Collatz Sequence Algorithm
// If even → divide by 2
// If odd → 3x + 1

int nextValue(int x) {
    if (x % 2 == 0)
        return x / 2;
    else
        return 3 * x + 1;
}


int countSteps(int x) {
    int steps = 0;
    while (x != 1) {
        x = nextValue(x);
        steps++;
    }
    return steps;
}


int maxInProcess(int x) {
    int maxVal = x;

    while (x != 1) {
        x = nextValue(x);
        if (x > maxVal) {
            maxVal = x;
        }
    }
    return maxVal;
}

int main() {
    int number;

    cout << "Pozitif bir tamsayi giriniz: ";
    cin >> number;

    int steps = countSteps(number);
    int maxValue = maxInProcess(number);

    cout << "Adim sayisi: " << steps << endl;
    cout << "Maksimum deger: " << maxValue << endl;

    return 0;
}