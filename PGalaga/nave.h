#pragma once
#include<iostream>
#include<string>

using namespace std;

class nave
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
	void disparar();
	void morir();
	void da�o();


};

