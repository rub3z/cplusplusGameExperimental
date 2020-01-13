// Adapted from code used in this tutorial:
// https://www.sfml-dev.org/tutorials/2.5/graphics-vertex-array.php
#pragma once
#include "stdafx.h"
#include <vector>
#include <execution>
#include "GameObject.h"

class Enemies : public std::vector<GameObject> {
   int enemyType;
   
public:

   Enemies::Enemies();
   void update(float& elapsedTime, float& playerPosX, float& playerPosY);
   void doit();
   std::vector<GameObject*> flagged;

private:
   struct Info {
      int index;
      float distanceX, distanceY;
      float pAccX, pAccY;
      float distance;
   };

   std::vector<Info> info;

   void * vT[1];
};