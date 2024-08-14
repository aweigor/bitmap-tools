#include "reader.h"
#include <iostream>
#include <fstream>
#include <filesystem>

namespace fs = std::filesystem;

BmpObject Reader::readFromFile(char * path) 
{
  HEADER bmpFileHeader;
  INFOHEADER bmpInfoHeader;

  if (path) 
  {
    std::cout << path << "\n";
    assert(fs::exists(path));
    std::ifstream file(path, std::ios::binary);
    if (file.is_open())
    {
      file.seekg(0, std::ios::beg);
      file.read(reinterpret_cast<char*>(&bmpFileHeader), sizeof bmpFileHeader);
      
      file.close();
    }
  }

  BmpObject obj = BmpObject(bmpFileHeader, bmpInfoHeader); 
  return obj;
}


