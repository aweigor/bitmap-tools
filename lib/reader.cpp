#include "reader.h"
#include <iostream>

BmpObject Reader::readFile(char ** fileName) 
{
  HEADER header = {};
  INFOHEADER infoHeader = {};

  std::cout << fileName << "\n";

  BmpObject obj = BmpObject(header, infoHeader); 
  return obj;
}


