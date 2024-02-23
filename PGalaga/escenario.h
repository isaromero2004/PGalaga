#pragma once
#include<iostream>
#include<string>

class escenario
{
private:
	int score;
	int vidas;

public:
	void mostrar_score();
	void reiniciar();
	void pause();
	void mostrar_gameover();
	void mostrar_record();
	void actualizar();


};

