#include <raylib.h>


int main() {
	InitWindow(800, 600, "Hello World!");
	SetTargetFPS(30);

	while (!WindowShouldClose()) {

		BeginDrawing();
		ClearBackground(BLACK);

		int x_RenderCenter = GetRenderWidth() / 2;
		int y_RenderCenter = GetRenderHeight() / 2;

		const char *test = "test";

		DrawFPS(0, 0);


		DrawPixel(x_RenderCenter, y_RenderCenter, WHITE);


		DrawText(test, 400, 560, 20, WHITE);
		DrawText("test", 400, 580, 20, WHITE);


		EndDrawing();
	}




	CloseWindow();
	return 0;
}
