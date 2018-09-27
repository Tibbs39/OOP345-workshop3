// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Sept 19, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#ifndef LIST_H
#define LIST_H

template<typename T = int, unsigned int N = 1>
class List {
    T array[N];
    unsigned int n; // counter for current number of elements
    unsigned int max = N; // max number of elements
    T blank;

    public:
        // default constructor
        List() : n{0u} {}
        
        // return current size of array
        size_t size() const {
            return n;
        }

        // return element at index
        const T& operator[](unsigned int index) const {
            // return blank if out of bounds
            return index < n ? array[index] : blank;
        }

        // add element to array
        void operator+=(const T& other) {
            if (n < max) {
                array[n] = other;
                ++n;
            } else {
                std::cout << "Array is full!" << std::endl;
            }
        }
};

#endif //LIST_H