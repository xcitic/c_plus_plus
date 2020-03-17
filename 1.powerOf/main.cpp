#include <iostream>

using namespace std;

double power(int baseNum, int powNum) {
    long double result = 1;

    for(int i = 0; i < powNum; i++) {
        result = result * baseNum;
    }

    return result;
}


int main()
{
    double results = power(10, 100);
    cout << results << endl;
    return 0;
}
