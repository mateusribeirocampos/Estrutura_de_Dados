#include "implementation.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const Records &rec) {
  os << rec.key;
  return os;
}

LinkedList::LinkedList() { startList(); }
