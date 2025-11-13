#include <iostream>
using namespace std;
class A
{
public:
    A() { cout << "A ctor\n"; }
    virtual void show() { cout << "A::show\n"; }
    ~A() { cout << "A dtor\n"; }
};
class B : public A
{
public:
    B() { cout << "B ctor\n"; }
    void show() { cout << "B::show\n"; }
    ~B() { cout << "B dtor\n"; }
};
class C :  public A
{
public:
    C() { cout << "C ctor\n"; }
    void show() { cout << "C::show\n"; }
    ~C() { cout << "C dtor\n"; }
};
class D : public B, public C
{
public:
    D() { cout << "D ctor\n"; }
    ~D() { cout << "D dtor\n"; }
};

int main()
{
    D d;
    return 0;
}