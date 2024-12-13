#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <stdexcept>

class BitcoinExchange {
public:
  //_______ Constructor.
  BitcoinExchange();
  BitcoinExchange(const BitcoinExchange &_src);

  //_______ Overload Operator.
  BitcoinExchange &operator=(const BitcoinExchange &_src);

  //_______ Destructor.
  ~BitcoinExchange();

  //_______ Member Functions.

  //_______ Read Files
  void readBitcoinFile(const std::string &fileName);
  void readSearchingFile(const std::string &fileQuery);
  float getPrice(const std::string &_date);

  //_______ Search Value
  void searchValue();
  void createOutputFile(const std::string &fileName, const std::map<std::string, float> &data);

  //_______ Getters
  std::map<std::string, float> getQueryData();
private:
  std::map<std::string, float> _bitcoinData;
  std::map<std::string, float> _queryData;
};
