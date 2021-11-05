#include <iostream>
#include <fstream>
#include "Tokenizer.h"

using namespace std;


int main(int argc, const char *argv[]) {

  if (argc != 2) {
    throw runtime_error("Usage term_frequency [TEST_FILE]");
  }

  Tokenizer t(argv[1]);
  auto tokens = t.getTokens();

  return 0;
}