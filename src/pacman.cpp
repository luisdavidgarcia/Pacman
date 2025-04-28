#include "pacman.hpp"

Pacman::Pacman(int startX, int startY, int startSpeed)
  : position(
      {static_cast<float>(startX*Maze::TILE_SIZE + (Maze::TILE_SIZE/2.0f)), 
      static_cast<float>(startY*Maze::TILE_SIZE + (Maze::TILE_SIZE/2.0f))}),
    velocity({0.0f, 0.0f}),
    speed(startSpeed),
    score(0),
    lives(3) 
{}

void Pacman::update(Maze& maze)
{
  if (IsKeyDown(KEY_UP)) velocity = {0.0f, -1.0f};
  else if (IsKeyDown(KEY_DOWN)) velocity = {0.0f, 1.0f};
  else if (IsKeyDown(KEY_LEFT)) velocity = {-1.0f, 0.0f};
  else if (IsKeyDown(KEY_RIGHT)) velocity = {1.0f, 0.0f};

  float nextPosX = position.x + velocity.x * speed;
  float nextPosY = position.y + velocity.y * speed;

  int nextTileX = static_cast<int>(nextPosX / Maze::TILE_SIZE);
  int nextTileY = static_cast<int>(nextPosY / Maze::TILE_SIZE);

  MazeCell nextTile = maze.getTile(nextTileY, nextTileX);

  if (nextTile != MazeCell::Wall) {
    position.x = nextPosX;
    position.y = nextPosY;
  }

  if (nextTile == MazeCell::Pellet) {
    maze.collectPellet(nextTileY, nextTileX);
    score += 10;
  }

  // TODO: Add Power Pellet
}

void Pacman::draw() const
{
  float radius = Maze::TILE_SIZE / 3.0f;
  float angleStart = 45.0f;
  float angleEnd = 315.0f;

  DrawCircleSector(position, radius,angleStart, angleEnd, 30, YELLOW);
}

void Pacman::onCollision()
{
  lives--;

  if (lives <= 0) {
    gameOver = true;
  }

  position = {10.0f, 17.0f};

  // TODO: Added Game Over Screen and Logic for Ghost Hit
}

