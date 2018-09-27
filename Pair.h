// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Sept 19, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#ifndef PAIR_H
#define PAIR_H
#include <string>

// Pair template class
template<typename A = int, typename B = int>
class Pair {
    A key;
    B value;

    public:
        // default constructor
        Pair() {}

        // constructor
        Pair(const A& a, const B& b) : key(a), value(b) {}

        // return key
        const A& getKey() const {
            return key;
        }

        // return value
        const B& getValue() const {
            return value;
        }
};

#endif //PAIR_H