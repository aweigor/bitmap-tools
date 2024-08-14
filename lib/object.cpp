#include "object.h"

BmpObject::BmpObject(HEADER header, INFOHEADER infoHeader) {
  _header = header;
  _infoHeader = infoHeader;
}

HEADER BmpObject::getHeader() const {
  return _header;
};

INFOHEADER BmpObject::getInfoHeader() const {
  return _infoHeader;
} 
