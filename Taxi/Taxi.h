
// Taxi.h: главный файл заголовка для приложения PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "включить pch.h до включения этого файла в PCH"
#endif

#include "resource.h"		// основные символы


// CTaxiApp:
// Сведения о реализации этого класса: Taxi.cpp
//

class CTaxiApp : public CWinApp
{
public:
	CTaxiApp();

// Переопределение
public:
	virtual BOOL InitInstance();

// Реализация

	DECLARE_MESSAGE_MAP()
};

extern CTaxiApp theApp;
