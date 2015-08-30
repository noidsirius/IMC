#ifndef Community_H
#define Community_H

//class core;
#include "common.h"

class Community {

public:

  Community* parent;
  int depth;
  vector<Community*> children;
  UID id;


  Community(UID id, int depth);
  void setParent(Community* parent);
  void addChild(Community* child);
  int diffDepth(Community* community);


private:

};
#endif
