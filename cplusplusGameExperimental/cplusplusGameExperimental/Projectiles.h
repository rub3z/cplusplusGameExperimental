#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <execution>
#include "ObjectInfo.h"
 
class Projectiles : public std::vector<ObjectInfo> {
   
   int pIterator;
   float width, height;

private:
   struct Info {
      int index;
      float distanceX, distanceY;
      float moveX, moveY;
      float pAccX, pAccY;
      float distance;
      float lifetime;
      bool shot;
   };

   std::vector<Info> info;

   void* vT[1];
   
public:
   Projectiles();
   ObjectInfo & shootStraight(float& posX, float& posY, const float& vX, const float& vY);
   ObjectInfo & shootSpread(float& posX, float& posY, float& vX, float& vY);
   void update(float & elapsedTime);
};