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

// helper functions for setting empty states
template<typename T>
T setEmpty(T& t) {
    return 0;
}

// specialized for strings
template<>
std::string setEmpty<std::string>(std::string& t) {
    return "";
}

// Pair template class
template<typename A = double, typename B = double>
class Pair {
    A key;
    B value;

    public:
        // default constructor
        Pair() {
            // set safe empty states
            key = setEmpty(key);
            value = setEmpty(value);
        };

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

#endif //W3_PAIR_H