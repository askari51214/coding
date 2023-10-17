#include<iostream>
#include <cstdlib>


int main() {
  int otp = rand() %  1000+ 9999;
  // randomNumber will be a random number between 1000 and 9999
  std::cout<<otp;
  return 0;
}
