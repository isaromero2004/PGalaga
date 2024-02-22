#pragma once
#include<iostream>
#include<string>

class escenario
{
private:
	int score;
	bool gameover;

public:
	void mostrar_score();
	void reiniciar();
	void pause();
	bool mostrar_gameover();
	void mostrar_record();

};

