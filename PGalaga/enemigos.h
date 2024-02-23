#pragma once
#include<iostream>
#include<string>

using namespace std;

class enemigos
{
private:
	int salud = 100;
	string color;
	float posicionX;
	float posicionY;
	int ancho;
	int alto;
	int velocidad;

public:
	void moverX();
	void moverY();
	void disparar();
	void morir();
	void daño();
};

