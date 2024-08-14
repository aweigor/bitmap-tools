#include "lib/reader.h"
#include <algorithm>
#include <string>
#include <iostream>

char* getCmdOption(char ** begin, char ** end, const std::string & option) 
{
  char ** itr = std::find(begin, end, option);
  if (itr != end && ++itr != end)
  {
    return *itr;
  }
  return 0;
}

int main(int argc, char ** argv) 
{
  char * path = getCmdOption(argv, argv+argc, "-f");
  Reader reader;
  BmpObject object = reader.readFromFile(path);
  
  std::cout << object.getHeader().size << "\n";

  return 0;
}
