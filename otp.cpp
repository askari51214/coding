#include <random>

int main() {
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dist(1, 10);

  int randomNumber = dist(gen);
  // randomNumber will be a random number between 1 and 10
  return 0;
}