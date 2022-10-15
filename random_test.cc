
#include <iostream>

#include "absl/random/random.h"

void MRandom() {
  absl::BitGen gen2(std::seed_seq{1, 2, 3});
  std::cerr << "A X" << std::endl;
  return;
}

int main(int argc, char** argv) {
  MRandom();
  return 0;
}

