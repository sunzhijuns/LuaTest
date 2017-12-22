// LuaTest.cpp: 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include<iostream>
using namespace std;
#include<lua.hpp>
#include"test1\push_data.h"
#include"test1\gongzhitai.h"
#include"test1\call_va.h"
#include"test1\jiazailuawenjian.h"


int main()
{
	// 演示lua栈
	//push_data();

	// 控制台
	kongzhitai();

	//加载配置文件
	//jiazaipeizhiwenjian();

	//调用lua代码
	//jiazailuawenjia();
	system("pause");
    return 0;
}

