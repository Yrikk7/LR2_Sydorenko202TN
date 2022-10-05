#include "Header.h"
#include <iostream>

using namespace std;

Vector3D Vector3D::Init(float x1, float y1, float z1, float x2, float y2, float z2, float scal)
{
    Vector3D tmp;
    tmp.x1 = x1;
    tmp.y1 = y1;
    tmp.z1 = z1;
    tmp.x2 = x2;
    tmp.y2 = y2;
    tmp.z2 = z2;
    tmp.scal = scal;
    return tmp;    
}

Vector3D Vector3D::Read(float x1, float y1, float z1, float x2, float y2, float z2, float scal)
{
    Vector3D tmp;
    cout << "x1:" << endl;
    cin >> tmp.x1;
    cout << "y1:" << endl;
    cin >> tmp.y1;
    cout << "z1:" << endl;
    cin >> tmp.z1;
    cout << "x2:" << endl;
    cin >> tmp.x2;
    cout << "y2:" << endl;
    cin >> tmp.y2;
    cout << "z2:" << endl;
    cin >> tmp.z2;
    cout << "scal:" << endl;
    cin >> tmp.scal;
    return tmp;   
}

Vector3D Vector3D::multip()
{
    Vector3D tmp;     
    tmp.x1 = x1 + x2;
    tmp.y1 = y1 + y2;
    tmp.z1 = z1 + z2;
    cout << "multip =" << "(" << tmp.x1 <<";" << tmp.y1 <<";" << tmp.z1 << ")"<<endl;    
    return tmp;
}

Vector3D Vector3D::subtraction()
{
    Vector3D tmp;
    tmp.x1 = x1 - x2;
    tmp.y1 = y1 - y2;
    tmp.z1 = z1 - z2;
    cout << "subtraction =" << "(" << tmp.x1 << ";" << tmp.y1 << ";" << tmp.z1 << ")"<<endl;
        return tmp;    
}

Vector3D Vector3D::scalar()
{
    Vector3D tmp;
    tmp.x1 = x1 * x2;
    tmp.y1 = y1 * y2;
    tmp.z1 = z1 * z2;
    tmp.x2 = tmp.x1 + tmp.y1 + tmp.z1;
    cout << "scalar =" << tmp.x2<< endl;
       
    return tmp;
}

Vector3D Vector3D::multialar()
{
    Vector3D tmp;
    tmp.x1 = x1 * scal;
    tmp.y1 = y1 * scal;
    tmp.z1 = z1 * scal;
    tmp.x2 = x2 * scal;
    tmp.y2 = y2 * scal;
    tmp.z2 = z2 * scal;
    cout << "multialar A =" << "(" << tmp.x1 << ";" << tmp.y1 << ";" << tmp.z1 << ")"<< endl;
    cout << "multialar B =" << "(" << tmp.x2 << ";" << tmp.y2 << ";" << tmp.z2 << ")" << endl;
   
    return tmp;
}

Vector3D Vector3D::comparison()
{
    return Vector3D();
}

Vector3D Vector3D::comparisonvector()
{
    Vector3D tmp;
    tmp.x1 = pow(x1, 2) + pow(y1, 2) + pow(z1, 2);
    tmp.x2 = pow(x2, 2) + pow(y2, 2) + pow(z2, 2);
    tmp.y1 = pow(tmp.x1, 0.5);
    tmp.y2 = pow(tmp.x2, 0.5);
    cout << "comparisonvector A =" << tmp.y1<< endl;
    cout << "comparisonvector B =" << tmp.y2<< endl;
    
        
    return tmp;
}

Vector3D Vector3D::comparingthelengthofs()
{
    Vector3D tmp;
    tmp.x1 = pow(x1, 2) + pow(y1, 2) + pow(z1, 2);
    tmp.x2 = pow(x2, 2) + pow(y2, 2) + pow(z2, 2);
    tmp.y1 = pow(tmp.x1, 0.5);
    tmp.y2 = pow(tmp.x2, 0.5);   
    if (tmp.y1 > tmp.y2)
    {
        cout << "Vector A"<<"("<<tmp.y1<<")" << ">" << "Vector B" << "(" << tmp.y2 << ")"<<endl;
        return tmp;
    }
    else(tmp.y1 < tmp.y2);
    {
        cout << "Vector A" << "(" << tmp.y1 << ")" << "<" << "Vector B" << "(" << tmp.y2 << ")"<<endl;
        return tmp;
    }   
   
    return tmp;
}

void Vector3D::Display()
{

}