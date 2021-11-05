#pragma once

#include <string>
#include <vector>

class Tokenizer {
public:
  Tokenizer(std::string inputPath);
  std::vector<std::string> getTokens();

private:
  std::string _inputPath;
};