#include <raylib.h>


int main() {
	InitWindow(800, 600, "Hello World!");


	while (!WindowShouldClose()) {

		BeginDrawing();
		DrawText("Hi Amor!", 350, 280, 20, WHITE);
		EndDrawing();
	}




	CloseWindow();
	return 0;
}
