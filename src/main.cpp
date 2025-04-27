#include "raylib.h"
#include "maze.hpp"
#include <cstdlib>

int main(void) 
{
  Maze maze;

  InitWindow(700, 750, "Pacman!");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);

    //DrawText("Hello Pac-Man!", 300, 280, 20, YELLOW);
    maze.draw();


    EndDrawing();
  }

  CloseWindow();
  return EXIT_SUCCESS;
}
