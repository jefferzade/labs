#include <iostream>
#include <ctime>
#include <cstdlib>

template <class T> void swap(T& a, T& b) {
    T c(std::move(a));
    a = std::move(b);
    b = std::move(c);
}

int main() {
    int a = 5;
    int b = 1;
    std::cout << a << " " << b << std::endl;
    swap(a, b);
    std::cout << a << " " << b << std::endl;
}
