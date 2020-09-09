#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void seedRandom ()
{
    srand (time(NULL));
}

int getRandomInt (int low, int high)
{
    
    return rand()%(high - low) + low;
}


int main() {
    
    int x;
    //prepare the system to generate a random nubmer
    seedRandom();
    // getRandomInt generates a random number between 10 and 50 and saves it in x
    x=getRandomInt(10,50);

    return 0;
}
