//
// Created by JH L on 2020/5/3.
//
#include <string>

namespace ljh {
    class Vector {
    public:
        explicit Vector(int s) : elem(new double[s]), size(s) {

        }

        ~Vector() {
            delete[]elem;
            delete str;
        }

    private:
        double *elem;
        int size;
        std::string *str{};
    };
}

class VirTest {
public:
    virtual int show();
};

int VirTest::show() {
    return 0;
}

int main() {

}

