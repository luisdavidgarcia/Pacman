#include "maze.hpp"

Maze::Maze() {
  grid = {{
    { MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Wall,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall },
    { MazeCell::Empty,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Empty, 
      MazeCell::Empty,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Empty,MazeCell::Empty,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Empty },
    { MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Empty,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall },
    { MazeCell::Empty,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Empty,MazeCell::Pellet,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Empty,MazeCell::Pellet, 
      MazeCell::Empty,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Empty },
    { MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall },
    { MazeCell::Empty,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Empty },
    { MazeCell::Empty,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Empty, 
      MazeCell::Empty,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Empty,MazeCell::Empty,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Empty,MazeCell::Empty, 
      MazeCell::Empty },
    { MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Empty, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Empty,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Empty,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Pellet,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet,MazeCell::Pellet, 
      MazeCell::Wall },
    { MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall,MazeCell::Wall,MazeCell::Wall,MazeCell::Wall, 
      MazeCell::Wall },
  }};
}

void Maze::draw(int tileSize) const 
{
  float radius = tileSize / 10.0f;
  int tileCenter = tileSize / 2;

  for (int row = 0; row < ROWS; ++row) {
    for (int col = 0; col < COLS; ++col) {
      float x = col * tileSize;
      float y = row * tileSize;

      if (grid[row][col] == MazeCell::Wall) {
        DrawRectangle(x, y, tileSize, tileSize, BLUE);
      } else if (grid[row][col] == MazeCell::Pellet) {
        DrawCircle(
            x + tileCenter, 
            y + tileCenter, 
            radius, 
            YELLOW
        );
      }
    }
  }
}

MazeCell Maze::getTile(int row, int col) 
{
  if (row < 0 || row > ROWS-1) 
    std::cerr << "Improper row input" << std::endl;
  else if (col < 0 || col > COLS-1)
    std::cerr << "Improper column input" << std::endl;

  return grid[row][col];
}

void Maze::collectPellet(int row, int col)
{
  if (row < 0 || row > ROWS-1) 
    std::cerr << "Improper row input" << std::endl;
  else if (col < 0 || col > COLS-1)
    std::cerr << "Improper column input" << std::endl;

  if (grid[row][col] == MazeCell::Pellet)
    grid[row][col] = MazeCell::Empty;
}

