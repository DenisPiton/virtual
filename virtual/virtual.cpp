// virtual.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class Employer {
public:
    virtual void print()=0;

};
class President : public virtual Employer {
public:
    virtual void print() {
        std::cout << "It is President"<<std::endl;
    }
};
class Worker : public virtual Employer {
public:
    virtual void print() {
        std::cout << "It is Worker" << std::endl;
    }

};
class Manager : public virtual Employer {
public:
    virtual void print() {
        std::cout << "It is Manager" << std::endl;
    }

};


int main()
{
    std::cout << "Hello World!\n";
}

