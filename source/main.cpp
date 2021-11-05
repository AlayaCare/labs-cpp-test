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

  // TODO instantiate FrequencyCounter
  // compute frequency

  // TODO print summary of the term frequency
  return 0;
}