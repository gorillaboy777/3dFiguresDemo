#pragma once
#include <vector>
#include "Vertex.h"

class Cylinder {
  public:
    Cylinder(int newSectorsCount);
    void Draw();
  private:
    std::vector<VertexWithNormal> generateUnitVectors();
    int sectorsCount;
    unsigned int VAO, VBO, EBO;
    std::vector<VertexWithNormal> vertices;
    std::vector<unsigned int> indices;
};