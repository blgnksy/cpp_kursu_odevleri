//
// Created by Bilgin Aksoy on 19.01.2020.
//

template <typename T>
struct ValCat {
    static constexpr const char *p = "PR Value";
};

template <typename T>
struct ValCat <T &>
{
    static constexpr const char *p = "L Value";
};

template <typename T>
struct ValCat <T &&>
{
    static constexpr const char *p = "X Value";
};

#define valcat(e)   (ValCat<decltype((e))>::p)
#define pvcat(e)    std::cout << "value category of '"  #e << "' is " << valcat(e) << "\n"

#include <iostream>

int main()
{
    int x = 19;
    int y = 5;

    pvcat(x + 5);
}

