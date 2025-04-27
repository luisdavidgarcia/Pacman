// include/maze.hpp
#ifndef MAZE_HPP
#define MAZE_HPP

#include "raylib.h"
#include <array>

class Maze 
{
private:
  static constexpr int ROWS = 23;
  static constexpr int COLS = 21;
  std::array<std::array<int, COLS>, ROWS> grid;

public:
  Maze();
  void draw(int tileSize = 32) const;
};

#endif // MAZE_HPP

