#pragma once

#include <map>
#include <string>
#include <vector>

class FrequencyCounter {
public:
  FrequencyCounter(std::vector<std::string> tokens);

  /***
   * Returns a map for term frequency
   * key: token
   * value: count of term
   */
  std::map<std::string, int> getFrequency();
};