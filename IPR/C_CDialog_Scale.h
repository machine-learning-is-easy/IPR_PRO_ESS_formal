#pragma once


// C_CDialog_Scale �Ի���

class C_CDialog_Scale : public CDialogEx
{
	DECLARE_DYNAMIC(C_CDialog_Scale)

public:
	C_CDialog_Scale(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~C_CDialog_Scale();

// �Ի�������
	enum { IDD = IDD_SCAL };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:
	// //��ʼ��ˮ���Ͷ�
	float ID_Vari_Satu_Ini_W;
	// //����ˮ
	float ID_Vari_Conate_W;
	float ID_Vari_Para_a;
	// //����b
	float ID_Vari_Para_b;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
};
