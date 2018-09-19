// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Sept 19, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#ifndef W3_LIST_H
#define W3_LIST_H

//namespace w3 {
    template<typename T = int, unsigned int N = 1>
    class List {
        T array[N];
        unsigned int size;
        unsigned int max = N;

        public:
            // default constructor
            List() : size(0) {}
            
            // return size of array
            size_t size() const {
                return size;
            }

            // return element at index
            const T& operator[](unsigned int index) const {
                return index < size ? array[index] : 0;
            
            }

            // add element to array
            void operator+=(const T& other) {
                if (size < max) {
                    array[size] = other;
                    ++size;
                } else {
                    std::cout << "Array is full!" << std::endl;
                }
            }
    };
//}

#endif W3_LIST_H