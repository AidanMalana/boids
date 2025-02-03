#include <raylib.h>

int main() {

  InitWindow(640, 360, "Boids");

  while (!WindowShouldClose()) {
    BeginDrawing();
    ClearBackground(SKYBLUE);
    EndDrawing();
  }
  CloseWindow();
  return 0;
}
