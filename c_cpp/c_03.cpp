//
// Created by Bilgin Aksoy on 19.01.2020.
//
int main()
{
    int x = 10;
    int y = 20;

    int * const p1 = &x; //const pointer to int
    const int *p2 = &x; //pointer to int const
    int const *p3 = &x; //pointer to const int
    const int* const p4 = &x;// const pointer to const int

    *p1 = 40;
    p1 = &y;

    *p2 = 40;
    p2 = &y;

    *p3 = 40;
    p3 = &y;

    *p4 = 40;
    p4 = &y;
}

