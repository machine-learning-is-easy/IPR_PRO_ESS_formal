#pragma once


// C_CDdialog_Reservoir �Ի���

class C_CDdialog_Reservoir : public CDialogEx
{
	DECLARE_DYNAMIC(C_CDdialog_Reservoir)

public:
	C_CDdialog_Reservoir(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~C_CDdialog_Reservoir();

// �Ի�������
	enum { IDD = IDD_Reservior };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnEnChangePressIni();
	float ID_Vari_Pre_Ini;
	// //����ز�ѹ��
	float ID_Vari_Pres_Opt;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	// //reserve varible
	float ID_Vari_Reserves;
	float ID_Vari_Reserve_rec;
};
