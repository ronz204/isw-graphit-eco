#pragma once

#include <string>
#include "../enums/NodeType.h"

struct Node
{
  int id;
  int type;
  int floor;
  float px, py;

  std::string code;
  std::string label;
};
