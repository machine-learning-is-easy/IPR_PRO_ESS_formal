#pragma once
#include "resource.h"

// C_IPR_INF_SHOW �Ի���

class C_IPR_INF_SHOW : public CDialogEx
{
	DECLARE_DYNAMIC(C_IPR_INF_SHOW)

public:
	C_IPR_INF_SHOW(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~C_IPR_INF_SHOW();

// �Ի�������
	enum { IDD = IDD_IPR_INF_SHOW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	CString P_PRENT;
	CString m_STR_P_INF;
	afx_msg void OnBnClickedCalt();
};
