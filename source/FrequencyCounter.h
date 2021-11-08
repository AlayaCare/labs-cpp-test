#pragma once

#include <map>
#include <string>
#include <vector>

class FrequencyCounter {
public:
  /***
  FrequencyCounter count the number tokens in a list of tokens
  
  For example for the input [ 'a', 'b', 'c', 'a', 'c', 'e']
  The output of getFrequency would be
  { {a,2}, {b, 1}, {c, 2}, {e, 1}}
  */
  FrequencyCounter(std::vector<std::string> tokens);

  /***
   * Returns a map for token frequency
   * key: token
   * value: count
   */
  std::map<std::string, int> getFrequency();
};
