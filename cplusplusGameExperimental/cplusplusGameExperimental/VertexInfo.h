#pragma once
class ObjectInfo {
   friend class State;
public:
   float posX, posY;
   int r, g, b;

   ObjectInfo() {
      posX = 0.0f;
      posY = 0.0f;
      r = 0;
      g = 0;
      b = 0;
   }

};