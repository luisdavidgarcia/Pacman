// include/maze.hpp
#ifndef MAZE_HPP
#define MAZE_HPP

#include "raylib.h"
#include <array>
#include <iostream>

enum class MazeCell
{
  Empty,
  Wall,
  Pellet,
  PowerPellet
};

class Maze 
{
public:
  static constexpr int ROWS = 23;
  static constexpr int COLS = 21;
  static constexpr int TILE_SIZE = 32;

  Maze();
  void draw(int tileSize = TILE_SIZE) const;
  MazeCell getTile(int row, int col);
  void collectPellet(int row, int col);

private:
  std::array<std::array<MazeCell, COLS>, ROWS> grid;
};

#endif // MAZE_HPP

