// Dll1.cpp: 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h" 
#include "DLL.h"  
#include"generate.h"
#include <Windows.h>  
#include <iostream>  
using namespace std;

bool set(int ExpNumber, int operator_number, int Accuracy, bool fraction, bool decimal, int min, int max, int operator_mode) {
	generate a;
	a.set(ExpNumber, operator_number, Accuracy, fraction, decimal, min, max, operator_mode);
	a.expression();
	return false;

}