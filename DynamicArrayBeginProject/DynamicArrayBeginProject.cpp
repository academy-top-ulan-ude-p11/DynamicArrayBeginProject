#include <iostream>

using namespace std;

class DArray
{
    int* items;
    int size;
public:
    DArray() : size{ 0 }, items{ nullptr } {}
    DArray(int size) : size{ size }
    {
        items = new int[size]{};
    }
    ~DArray()
    {
        if(items)
            delete[] items;
    }
};

void Func()
{
    DArray array(10);
}

int main()
{
    Func();

    return 0;
}
