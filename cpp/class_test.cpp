//
// Created by JH L on 2020/2/5.
//
#include <vector>
#include <iostream>

class ParentClass1 {
public:
    int a = 0;

    ~ParentClass1() {
        std::cout << "基类1析构函数" << std::endl;
    }
};

class ParentClass2 {
public:
    ParentClass2() {
        std::cout << "基类2构造函数" << std::endl;
    }

    ParentClass2(char c) {
        std::cout << "c=" << c << std::endl;
    }

    ~ParentClass2() {
        std::cout << "基类2析构函数" << std::endl;
    }
};

class ChildrenClass : public ParentClass1 {
public:
    int a = 1;

    ChildrenClass() {
        std::cout << "派生类构造函数" << std::endl;
    }

    ChildrenClass(int i) {
        std::cout << "i=" << i << std::endl;
    }

    ~ChildrenClass() {
        std::cout << "派生类析构函数" << std::endl;
    }
};
