#include <iostream>
#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <sstream>

using std::cout;
using std::transform;
std::vector<int> data={};

int main()
{
    std::string line;
    int input;
    cout << "Enter numbers separated by spaces: " <<std::endl;
    std::getline(std::cin, line);
    std::istringstream stream(line);
    while (stream >> input)
        data.push_back(input);
 
    int sum = 0;
    transform(data.begin(), data.end(), data.begin(), [](int x){return x*x;});

    for(auto i : data)
        sum += i;
        cout << sum << " ";

}
