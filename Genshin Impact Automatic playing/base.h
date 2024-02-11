#pragma once
#include<stdlib.h> 
#include<iostream> 
#include<string> 
#include<fstream>
#include<Windows.h>
//按下按键函数
void down(int vk)
{
	keybd_event(vk, 0, 0, 0);
}
//松开按键函数
void up(int vk)
{
	keybd_event(vk, 0, KEYEVENTF_KEYUP, 0);
}
//按下松开一体函数
void press(int vk)
{
	down(vk);
	up(vk);
}