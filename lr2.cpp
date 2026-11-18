#include <iostream>
using namespace std;

int main() {
    int MAX = 100;
    int n, arr[MAX];

    cout << "Enter N: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; ++i)
        cin >> arr[i];

    int sumPos = 0, countNeg = 0;
    int minVal = arr[0], maxVal = arr[0];
    int minIdx = 0, maxIdx = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > 0) sumPos += arr[i];
        if (arr[i] < 0) countNeg++;

        if (arr[i] < minVal) {
            minVal = arr[i];
            minIdx = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIdx = i;
        }
    }

    cout << "Sum of positives: " << sumPos << "\n";
    cout << "Count of negatives: " << countNeg << "\n";
    cout << "Min: " << minVal << " (index " << minIdx << ")\n";
    cout << "Max: " << maxVal << " (index " << maxIdx << ")\n";

    cout << "Multiples of 3 (reverse): ";
    for (int i = n - 1; i >= 0; --i)
        if (arr[i] % 3 == 0)
            cout << arr[i] << " ";
    cout << "\n";

    return 0;
}


