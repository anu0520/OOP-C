#include <iostream>
class Functor {
public:
    void operator()(int a, int b) const {
        std::cout << "Functor called with arguments: " << a << " and " << b << std::endl;
    }
};
int main() {
    Functor functor;
    functor(10, 20);
    return 0;
}

