// genration of otp 
#include<iostream>
#include<random>
// making a function to generate otp
int get_otp(int min,int max){
   std:: random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<int> distribution(min, max);
}
