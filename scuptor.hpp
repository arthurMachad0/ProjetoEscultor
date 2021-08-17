#ifndef SCULPTOR_H
#define SCULPTOR_H
#include <string>
#include <vector>



struct Voxel {
  float r, g, b; // Colors
  float a; // Transparency
  bool isOn; // Included or not
};


class Sculptor{
protected:
  Voxel ***v; // 3D matrix
  int nx, ny, nz; // Dimensions
  float r, g, b, a; // Current drawing color
  int i, j, k; //contadores para alocação dinamica
  int l, m, n; // contadores para o putBox
  
public:
  Sculptor(int _nx=1, int _ny=1, int _nz=1);
  ~Sculptor();
  void setColor(float r, float g, float b, float a);
  void putVoxel(int x, int y, int z);
  void cutVoxel(int x, int y, int z);
  void putBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void cutBox(int x0, int x1, int y0, int y1, int z0, int z1);
  void putSphere(int xc, int yc, int zc, int e);
  void cutSphere(int xc, int yc, int zc, int e);
  void putEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz);
  void cutEllipsoid(int xc, int yc, int zc, int rx, int ry, int rz);
  void writeOFF(char* filename);
  
};

#endif // SCULPTOR_H
