#pragma once
#include<iostream>
#include<string>

using namespace std;

class enemigos
{
private:
	int salud = 100;
	string color;
	float moverX;
	int ancho;
	int alto;
public:
	void moverX();
	void disparar();
	void navedestruida();
	void da�o(int da�o);
};

