/*************************************************************************
    > File Name: main.cpp
    > Author: berli
    > Mail: berli@tencent.com 
    > Created Time: 2018年11月23日 星期五 17时29分21秒
 ************************************************************************/

#include "arsx08.h"
#include<iostream>
using namespace std;

int main()
{
	CanRxMsg data;
	data.Data[0] = 0x4f;
	data.Data[1] = 0x00;
	data.Data[2] = 0x20;
	data.Data[3] = 0x80;
	data.Data[4] = 0x00;
	data.Data[5] = 0x80;
	data.Data[6] = 0xff;
	data.Data[7] = 0x5f;
	ObjList list = ARS_Obj_Handle(&data);

	cout<<"========================="<<endl;
	data.Data[0] = 0x79;
	data.Data[1] = 0x22;
	data.Data[2] = 0x00;
	data.Data[3] = 0x00;
	data.Data[4] = 0x20;
	data.Data[5] = 0x00;
	data.Data[6] = 0x20;
	data.Data[7] = 0x00;
	list = ARS_Obj_Handle(&data);
	return 0;
}
