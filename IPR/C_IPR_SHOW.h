#pragma once
#include "resource.h"

// C_IPR_SHOW �Ի���

class C_IPR_SHOW : public CDialogEx
{
	DECLARE_DYNAMIC(C_IPR_SHOW)

public:
	C_IPR_SHOW(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~C_IPR_SHOW();

	virtual void OnFinalRelease();

// �Ի�������
	enum { IDD = IDD_IPR_SHOW };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
	DECLARE_DISPATCH_MAP()
	DECLARE_INTERFACE_MAP()
public:
	afx_msg void OnStnClickedIprRes();
	virtual BOOL OnInitDialog();
	afx_msg void OnBnClickedClose();
};
