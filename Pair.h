// Name:  Kenneth Yue
// Seneca Student ID: 127932176
// Seneca email:  kyue3@myseneca.ca
// Date of completion: Sept 19, 2018
//
// I confirm that the content of this file is created by me,
// with exception of the parts provided to me by my professor

#ifndef W3_PAIR_H
#define W3_PAIR_H

//namespace w3 {
    template<typename A = int, typename B = int>
    class Pair {
        A key;
        B value;

        public:
            // default constructor
            Pair() : key(0), value(0) {};
            
            // constructor
            Pair(const A& a, const B& b) {
                key = a;
                value = b;
            }

            const A& getKey() const {
                return key;
            }

            const B& getValue() const {
                return value;
            }
    };
//}

#endif W3_PAIR_H