#include "raylib.h"
#include "maze.hpp"
#include "pacman.hpp"
#include <cstdlib>

int main(void) 
{
  Pacman pacman;
  Maze maze;

  InitWindow(700, 750, "Pacman!");
  SetTargetFPS(60);

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(BLACK);

    if (pacman.gameOver) {
      DrawText("GAME OVER", 250, 350, 40, RED);
      DrawText("Press R to Restart", 250, 400, 20, WHITE);
    } else {
      pacman.update(maze);
      pacman.draw();
      maze.draw();
    }

    EndDrawing();

    if (pacman.gameOver && IsKeyPressed(KEY_R)) {
      pacman = Pacman(10, 17, 5);
      pacman.gameOver = false;
      maze = Maze();
    }
  }

  CloseWindow();
  return EXIT_SUCCESS;
}
