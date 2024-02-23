#pragma once
#include<iostream>
#include<string>

class temporizador
{
private:
	int tiempo_inicial = 120;
	int tiempo_final = 0;
	int contador_tiempo;

public:
	void mostrar_tiempo();
	void disminuir_segundos();
};

