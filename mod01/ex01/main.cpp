#include "Zombie.hpp"

int main()
{
    int N = 3;
    Zombie *z = zombieHorde(N, "Deathless");
    for (int i = 0; i < N; ++i)
        z[i].announce();
    delete [] z;
    return (0);
}