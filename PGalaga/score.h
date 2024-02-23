#pragma once
#include<iostream>
#include<string>

class score
{
private: 
	int score_inicial = 0;
	int score_final = 2000;
	int contador;

public:
	void mostrar_score();
	void aumentar_puntos();
};

