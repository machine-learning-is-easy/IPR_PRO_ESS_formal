#pragma once


// C_CDialog_Stage �Ի���

class C_CDialog_Stage : public CDialogEx
{
	DECLARE_DYNAMIC(C_CDialog_Stage)

public:
	C_CDialog_Stage(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~C_CDialog_Stage();

// �Ի�������
	enum { IDD = IDD_Stage };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
