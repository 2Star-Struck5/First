#include <iostream>

template <typename T>
class ArrayProcessor {
private:
    T *array;
    int size;

public:
    ArrayProcessor(int size) : size(size) {
        array = new T[size];
    }

    ~ArrayProcessor() {
        delete[] array;
    }

    void inputArray() {
        std::cout << "Enter " << size << " elements for the array:\n";
        for (int i = 0; i < size; ++i) {
            std::cin >> array[i];
        }
    }

    T findSmallest() {
        T smallest = array[0];
        for (int i = 1; i < size; ++i) {
            if (array[i] < smallest) {
                smallest = array[i];
            }
        }
        return smallest;
    }
};

int main() {
    using namespace std;

    int size;
    cout << "Enter the number of elements for the integer array: ";
    cin >> size;
    ArrayProcessor<int> intProcessor(size);
    intProcessor.inputArray();
    cout << "Smallest number in the integer array: " << intProcessor.findSmallest() << endl;

    cout << "Enter the number of elements for the double array: ";
    cin >> size;
    ArrayProcessor<double> doubleProcessor(size);
    doubleProcessor.inputArray();
    cout << "Smallest number in the double array: " << doubleProcessor.findSmallest() << endl;

    return 0;
}
