#pragma once
#include<stdlib.h> 
#include<iostream> 
#include<string> 
#include<fstream>
#include<Windows.h>
//���°�������
void down(int vk)
{
	keybd_event(vk, 0, 0, 0);
}
//�ɿ���������
void up(int vk)
{
	keybd_event(vk, 0, KEYEVENTF_KEYUP, 0);
}
//�����ɿ�һ�庯��
void press(int vk)
{
	down(vk);
	up(vk);
}