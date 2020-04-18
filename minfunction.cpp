// minimum function
#include <iostream>
using namespace std;
template <class any>
any findMin(any a, any b) {
    return (a<b?a:b);
}
int main(){
    // Function template test
    char x = '@', y = '$';
    std::cout << findMin(x, y) << std::endl;

    double q = 64.2289 , w = 54.1723;
    std::cout << findMin(q, w) << std::endl;

    std::cout << std::endl;
    return 0;
}







