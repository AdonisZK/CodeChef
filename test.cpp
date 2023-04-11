#include <iostream>
#include <vector>

int main()
{
    std::vector<char> v = {'a', 'b', 'c'};

    for (auto &i : v)
    {
        std::cout << i;
        if (&i == &v.back())
        {
            std::cout << " (last element)";
        }
        std::cout << std::endl;
    }

    return 0;
}