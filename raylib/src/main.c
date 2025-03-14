#include <raylib.h>
#include <math.h>

int main() {
	SetTargetFPS(30);
	InitWindow(800, 600, "Hello World!");


	float x = GetRenderWidth() / 2;
	float y = GetRenderHeight() / 2;

	int f = 256;

	int r = 200;
	int g = 360;
	int fg = g / f;
	int sg;

	float x_p;
	float y_p;


	int v;




	while (!WindowShouldClose()) {

		BeginDrawing();
		ClearBackground(BLACK);


		const char *test = "test";

		DrawFPS(0, 0);


		for (sg = 0; sg < g; sg += fg) {
			x_p = (cos(sg * DEG2RAD) * r) + x;
			y_p = (sin(sg * DEG2RAD) * r) + y;
			DrawPixel(x_p, y_p, WHITE);
			DrawLine(x, y, x_p, y_p, RED);
			/*Vector2 points[v + 1] (x_p, y_p);
			DrawTriangleFan(points*, f, RED);*/
			}

		/*for (v = 1; v < f; v += 1) {
			Vector2 v[v] = (x_p, y_p);
			}

		DrawTriangleFan(v, f, RED);*/

		DrawPixel(x, y, WHITE);

		if (IsKeyPressed(84)) {
			DrawText(test, 400, 560, 20, WHITE);
			}

		DrawText("test", 400, 580, 20, WHITE);


		EndDrawing();
		}




	CloseWindow();
	return 0;
}
