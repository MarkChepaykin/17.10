#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
class ArrayOperations {
public:
    // Найти максимум в массиве
    static T findMax(const vector<T>& data) {
        if (data.empty()) {
            throw runtime_error("Array is empty!");
        }
        return *max_element(data.begin(), data.end());
    }

    // Найти минимум в массиве
    static T findMin(const vector<T>& data) {
        if (data.empty()) {
            throw runtime_error("Array is empty!");
        }
        return *min_element(data.begin(), data.end());
    }

    // Сортировать массив
    static void sort(vector<T>& data) {
        std::sort(data.begin(), data.end());
    }

    // Двоичный поиск в массиве
    static bool binarySearch(const vector<T>& data, const T& value) {
        if (data.empty()) {
            return false;
        }
        return std::binary_search(data.begin(), data.end(), value);
    }

    // Замена элемента массива на переданное значение
    static void replace(vector<T>& data, const T& oldVal, const T& newVal) {
        std::replace(data.begin(), data.end(), oldVal, newVal);
    }
};

int main() {
    vector<int> data = { 5, 3, 8, 1, 9, 2 };

    cout << "Max: " << ArrayOperations<int>::findMax(data) << endl;
    cout << "Min: " << ArrayOperations<int>::findMin(data) << endl;

    ArrayOperations<int>::sort(data);
    cout << "Sorted data: ";
    for (const auto& val : data) {
        cout << val << " ";
    }
    cout << endl;

    cout << "Binary search for 5: " << ArrayOperations<int>::binarySearch(data, 5) << endl;
    cout << "Binary search for 10: " << ArrayOperations<int>::binarySearch(data, 10) << endl;

    ArrayOperations<int>::replace(data, 5, 50);
    cout << "After replacing 5 with 50: ";
    for (const auto& val : data) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
