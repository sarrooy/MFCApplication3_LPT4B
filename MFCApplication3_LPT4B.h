
// MFCApplication3_LPT4B.h: archivo de encabezado principal para la aplicación PROJECT_NAME
//

#pragma once

#ifndef __AFXWIN_H__
	#error "incluir 'pch.h' antes de incluir este archivo para PCH"
#endif

#include "resource.h"		// Símbolos principales


// CMFCApplication3LPT4BApp:
// Consulte MFCApplication3_LPT4B.cpp para obtener información sobre la implementación de esta clase
//

class CMFCApplication3LPT4BApp : public CWinApp
{
public:
	CMFCApplication3LPT4BApp();

// Reemplazos
public:
	virtual BOOL InitInstance();

// Implementación

	DECLARE_MESSAGE_MAP()
};

extern CMFCApplication3LPT4BApp theApp;
