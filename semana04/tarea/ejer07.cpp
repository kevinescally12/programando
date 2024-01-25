#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> numbers = {12, 1, 2, 13, 5, 6, 4, 7, 1, 12, 9, 4, 13};
    cout << "Vector original: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    for (size_t i = 0; i < numbers.size(); ++i) {
        for (size_t j = i + 1; j < numbers.size();) {
            if (numbers[i] == numbers[j]) {
                numbers.erase(numbers.begin() + j);
            } else {
                ++j;
            }
        }
    }
    cout << "Vector sin duplicados: ";
    for (int numless : numbers) {
        cout << numless << " ";
    }
    cout << endl;
    return 0;
}