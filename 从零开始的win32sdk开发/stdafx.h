// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//
#pragma once
#ifdef _M_IX86
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='x86' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif _M_IA64
#pragmacomment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='ia64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#elif _M_X64
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='amd64' publicKeyToken='6595b64144ccf1df' language='*'\"")
#else
#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
#endif
#include "targetver.h"
#include "resource.h"
#define WIN32_LEAN_AND_MEAN             // 从 Windows 头中排除极少使用的资料
// Windows 头文件: 
#include <windows.h>
#include<windowsx.h>
//win32 sdk头文件
#include <ShlObj.h>
#include "CommCtrl.h"
#include <commdlg.h> 
// C 运行时头文件
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
//自己写的头文件
#include"Addwindow.h"
#include "Stugrade.h"
#include "从零开始的win32sdk开发.h"
#include "solves.h"
#include "filter.h"
#include "Statistics.h"
//c
#include<cstdio>
#include<cstring>
//c++ stl
#include<typeinfo.h>
#include<iostream>
#include<fstream>
#include<cstdio>
#include<map>
#include<vector>
#include<string>
#include<stdlib.h>
#include<sstream>
#include<set>
#include<algorithm>
#include <functional>
// TODO: 在此处引用程序需要的其他头文件
//不知道啥东西
#pragma comment( lib, "comctl32.lib" )
