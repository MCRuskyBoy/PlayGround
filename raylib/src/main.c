#include <raylib.h>
#include <math.h>

#include <stdio.h>


float x_CenterWindow1 = GetRenderWidth() / 2;
float y_CenterWindow1 = GetRenderHeight() / 2;

int AnzahlDerPunkte = 6;
int radius = 200;
int GradDesKreises = 360;
int GradMinAnwinklung = GradDesKreises / AnzahlDerPunkte;
int GradSollAnwinklung;

float x_Punkt;
float y_Punkt;

struct Vector2 Punkte[f];

int PunkteAnzahl;



int main() {


	while (!WindowShouldClose()) {
		PunkteAnzahl=0;
		for (GradSollAnwinklung = 0; GradSollAnwinklung < GradDesKreises; GradSollAnwinklung += GradMinAnwinklung) {
			printf("Grad Soll Anwinklung: %i\n", GradSollAnwinklung);
			x_Punkt = (cos(GradSollAnwinklung * DEG2RAD) * radius) + x_CenterWindow1;
			y_Punkt = (sin(GradSollAnwinklung * DEG2RAD) * radius) + y_CenterWindow1;
			DrawPixel(x_Punkt, y_Punkt, WHITE);

			PunkteAnzahl++;
			printf("Punkte Anzahl: %i\n", PunkteAnzahl);
			Punkte[PunkteAnzahl].x = x_Punkt;
			printf("x Punkt: %f\n",x_Punkt);
			Punkte[PunkteAnzahl].y = y_Punkt;
			}

		DrawTriangleFan(Punkte, AnzahlDerPunkte, RED);

		DrawPixel(x_CenterWindow1, y_CenterWindow1, WHITE);
		}
	window1();

	return 0;
}


int berechnungen_window1() {

	while (!WindowShouldClose()) {
		PunkteAnzahl=0;
		for (GradSollAnwinklung = 0; GradSollAnwinklung < GradDesKreises; GradSollAnwinklung += GradMinAnwinklung) {
			printf("Grad Soll Anwinklung: %i\n", GradSollAnwinklung);
			x_Punkt = (cos(GradSollAnwinklung * DEG2RAD) * radius) + x_CenterWindow1;
			y_Punkt = (sin(GradSollAnwinklung * DEG2RAD) * radius) + y_CenterWindow1;
			DrawPixel(x_Punkt, y_Punkt, WHITE);
}

int zeichnen() {
	DrawPixel(,, WHITE);
}

int window1() {
	berechnungen_window1();

	SetTargetFPS(5);
	InitWindow(500, 300, "Window 1");
	DrawFPS();
	while (!WindowShouldClose()) {
		ClearBackground(BLACK);
		BeginDrawing();
		zeichnen();
		EndDrawing();
	}
	CloseWindow();
}
