#include "Community.h"

Community::Community(UID id, int depth){
  this->id = id;
  this-> depth = depth;
  parent = NULL;
}

void Community::setParent(Community* parent){
  assert(this->depth + 1 == parent->depth);
  assert(this->parent == NULL);
  this->parent = parent;
  parent->addChild(this);
}

void Community::addChild(Community* child){
  this->children.push_back(child);
}
int Community::diffDepth(Community* community){
  assert(this->depth == community->depth);
  if(this == community)
    return 0;
  return this->parent->diffDepth(community->parent) + 1;
}
