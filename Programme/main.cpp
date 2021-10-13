#include <iostream>
using namespace std;

/**
 *
 * @return
 */
int sum();

/**
 *
 * @param argc
 * @param argv
 * @return
 */
int main(int argc, char* argv[]) {
    std::cout << sum() << std::endl;
    return 0;
}

/**
 * Calculate the sum of 21  + 21
 * @return 42
 */
int sum(){
    return 21 + 21;
}
