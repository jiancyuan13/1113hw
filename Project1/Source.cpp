#include <iostream>
#include <string>
using namespace std;
template <typename T>
int binary_search(T arr[], int size, T target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main(void) {
    char T;
    int n, q;
    while (cin >> T >> n >> q) {
        if (T == 'i') {
            int* arr = new int[n];
            for (int i = 0; i < n; ++i) {
                cin >> arr[i];
            }
            for (int i = 0; i < q; ++i) {
                int target;
                cin >> target;
                int result = binary_search(arr, n, target);
                cout << result << endl;
            }
        }
        else if (T == 's') {
            string* arr = new string[n];
            for (int i = 0; i < n; ++i) {
                cin >> arr[i];
            }
            for (int i = 0; i < q; ++i) {
                string target;
                cin >> target;
                int result = binary_search(arr, n, target);
                cout << result << endl;
            }
        }
        cout << endl;
    }
}