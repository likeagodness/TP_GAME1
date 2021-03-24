#include <iostream>
#include <flag.h>

flag::flag():captureStatus('0')  //����������� ������������, ������������� life
{
	mTexture.loadFromFile("Textures/flag.png"); //��������� �������� ����� �� ����� Textures, ����� flag.png
	mSprite.setTexture(mTexture); //������������� ������ �� ��������
	mSprite.setPosition(576, 448); //������������� � ������� �� �����
}

flag::~flag() //����������� ����������� 
{
	std::cout << "Flag destroyed\n"; //�������� �������� ������� ������ - ������ � �������
}