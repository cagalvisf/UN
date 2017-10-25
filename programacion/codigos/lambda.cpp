#include <vector>
#include <algorithm>
#include <iostream>
#include <functional>

int main()
{
  std::vector<int> c= {1,2,3,4,5,6,7,8,9,10};

  auto evens = std::count_if(begin(c), end(c), [](int num){
      return (num % 2) == 0;
    });
  std:: cout<<evens<< std::endl;

  int x=5;
  c.erase(std::remove_if(c.begin(), c.end(), [x](int n) {return n < x;}),c.end());

  
  std::cout<< "c:   ";
  std::for_each(c.begin(), c.end(), [](int i){ std::cout << i << ' ';});
  std::cout <<'\n';

  auto func1= [](int i) {return i+4;};
  std::cout <<"func1: "<< func1(6)<<'\n';

  std::function<int(int)> func2= [](int i) { return i+4; };
  std:: cout<< "func2: "<< func2(6) <<'\n';
  return 0;
}
