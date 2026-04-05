#pragma once

#include <string>
#include "../enums/EdgeStatus.h"

struct Edge
{
  int id;
  int status;
  double weight;

  int fromNodeId;
  int toNodeId;
};
