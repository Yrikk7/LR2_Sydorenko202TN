#pragma once
class Vector3D
{
public:
	Vector3D Init(float x1, float y1, float z1, float x2, float y2, float z2, float scal);
	Vector3D Read(float x1, float y1, float z1, float x2, float y2, float z2, float scal);
	Vector3D multip();//додавання век торів
	Vector3D subtraction();// Віднімання векторів
	Vector3D scalar();// скалярний добуток векторів
	Vector3D multialar();// множення на скаляр
	Vector3D comparison();// порівняння векторів
	Vector3D comparisonvector();// обчислення довжини вектора
	Vector3D comparingthelengthofs();// порівняння довжини векторів
	void Display();


private:
	float x1, y1, z1, x2, y2, z2, scal;

};
