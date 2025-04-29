#ifndef PACMAN_HPP
#define PACMAN_HPP

#include "raylib.h"
#include "maze.hpp"
#include <iostream>

class Pacman
{
private:
  Vector2 position;
  Vector2 velocity;
  int speed;
  int score;
  int lives;
  
public:
  Pacman(int startX = 10, int startY = 17, int startSpeed = 4);

  void update(Maze& maze);

  void draw() const;
  void drawScore() const;
  
  void onCollision();

  Vector2 getPosition() const { return position; }
  int getScore() const { return score; }
  int getLives() const { return lives; }

  void setPosition(float x, float y) { position = { x, y }; }
  void setVelocity(float vx, float vy) { velocity = { vx, vy }; }
  void setSpeed(int newSpeed) { speed = newSpeed; }
  void increaseScore(int amount) { score += amount; }
  void decreaseScore(int amount) { lives -= amount; }

  bool gameOver = false;
};

#endif // PACMAN_HPP
