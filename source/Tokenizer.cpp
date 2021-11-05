#include "Tokenizer.h"
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

Tokenizer::Tokenizer(std::string inputPath) : _inputPath(inputPath) {}

void tokenize(std::string const &str, const char delim, std::vector<std::string> &out) {
  // construct a stream from the string
  std::stringstream ss(str);

  std::string s;
  while (std::getline(ss, s, delim)) {
    out.push_back(s);
  }
}

std::vector<std::string> Tokenizer::getTokens() {
  std::vector<std::string> tokens;
  std::ifstream ifs(_inputPath, std::ifstream::in);

  std::string line;
  while (ifs.good()) {
    getline(ifs, line); // read current line

    std::vector<std::string> out;
    tokenize(line, ' ', out);  // tokenize only , (limitation)
    tokens.insert(tokens.end(), out.begin(), out.end());
  }
  return tokens;
}
