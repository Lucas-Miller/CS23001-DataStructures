// Lucas Miller
// Header file for bigint project
// CS23001

#include <iostream>

#ifndef CS2_BIGINT
#define CS2_BIGINT
const int CAPACITY = 200;
 
class bigint {
public:
    bigint();
    bigint(int);
    bigint(const char[]);
    bool operator==(const bigint&);
    bigint operator+(bigint) const;
    bigint operator+=(bigint);
    int operator[](int i) const; 
    bigint operator*(bigint);
    bigint timesDigit(int) const;
    bigint times10(int) const;
    void debugPrint(std::ostream&) const;
    friend std::istream& operator>>(std::istream&, bigint&);
    friend std::ostream& operator<<(std::ostream&, bigint);
private:
    void zero();
    int digitArray[CAPACITY];
};
#endif
