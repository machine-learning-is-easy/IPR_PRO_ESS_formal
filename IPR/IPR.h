
// IPR.h : IPR Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CIPRApp:
// �йش����ʵ�֣������ IPR.cpp
//

class CIPRApp : public CWinApp
{
public:
	CIPRApp();

public:


//	float Ini_pressure;
	/*float Pressure_reasonable;
	

	float Boi;
	float Gravity_o;
	float Visc_o;
	float Visc_w;
	float Compss_Ct;

	float Para_a;
	float Para_b;
	float S_w_ini;
	float S_w_conate;

	int stage;*/

// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��	
	DECLARE_MESSAGE_MAP()
	afx_msg void OnCumlqdvswct();
	afx_msg void OnResidWat();
};

extern CIPRApp theApp;
