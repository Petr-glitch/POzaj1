#include <iostream>

void Z1a(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << i % 10;
    }
}

void Z1b(int n)
{
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        std::cout << x % 2;
    }
}
void Z1d(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "0123";
    }
}
void Z1e(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << "0123456789";
    }

}
void Z2d(int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << std::endl;
        for (int j = n; j > i; j--)
        {
            std::cout << j;
        }
        
    }
    
}

int main()
{
    int n;
    std::cin >> n;
    //Z1a(n);
    //Z1b(n);
    //Z1d(n);
    //Z1e(n);
    Z2d(n);

    

    return 0;
}


