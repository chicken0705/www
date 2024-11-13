#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int binary_search(const vector<int>& data, int target) {
    int left = 0, right = data.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (data[mid] == target) return mid;
        else if (data[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int binary_search(const vector<string>& data, const string& target) {
    int left = 0, right = data.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (data[mid] == target) return mid;
        else if (data[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}

int main() {
    int num_cases = 2;  // 此處假設有兩組測資

    for (int case_idx = 0; case_idx < num_cases; ++case_idx) {
        char T;
        int n, q;
        cin >> T >> n >> q;

        if (T == 'i') {
            // 整數型態
            vector<int> data(n);
            for (int i = 0; i < n; ++i) {
                cin >> data[i];
            }

            for (int j = 0; j < q; ++j) {
                int target;
                cin >> target;
                cout << binary_search(data, target) << endl;
            }
        }
        else if (T == 's') {
            // 字串型態
            vector<string> data(n);
            for (int i = 0; i < n; ++i) {
                cin >> data[i];
            }

            for (int j = 0; j < q; ++j) {
                string target;
                cin >> target;
                cout << binary_search(data, target) << endl;
            }
        }
    }

    return 0;
}
