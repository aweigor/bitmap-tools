#include "object.h"

BmpObject::BmpObject(HEADER header, INFOHEADER infoHeader) {
  _header = header;
  _infoHeader = infoHeader;
}

HEADER BmpObject::getHeader() const {
  HEADER h = {};
  return h;
};

INFOHEADER BmpObject::getInfoHeader() const {
  INFOHEADER ih = {};
  return ih;
}
  
