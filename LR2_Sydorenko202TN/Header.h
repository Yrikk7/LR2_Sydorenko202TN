#pragma once
class Vector3D
{
public:
	Vector3D Init(float x1, float y1, float z1, float x2, float y2, float z2, float scal);
	Vector3D Read(float x1, float y1, float z1, float x2, float y2, float z2, float scal);
	Vector3D multip();//��������� ��� ����
	Vector3D subtraction();// ³������� �������
	Vector3D scalar();// ��������� ������� �������
	Vector3D multialar();// �������� �� ������
	Vector3D comparison();// ��������� �������
	Vector3D comparisonvector();// ���������� ������� �������
	Vector3D comparingthelengthofs();// ��������� ������� �������
	void Display();


private:
	float x1, y1, z1, x2, y2, z2, scal;

};
