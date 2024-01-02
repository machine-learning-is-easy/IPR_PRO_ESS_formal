#pragma once


// C_CDialog_Fluid_Property �Ի���

class C_CDialog_Fluid_Property : public CDialogEx
{
	DECLARE_DYNAMIC(C_CDialog_Fluid_Property)

public:
	C_CDialog_Fluid_Property(CWnd* pParent = NULL);   // ��׼���캯��
	virtual ~C_CDialog_Fluid_Property();

// �Ի�������
	enum { IDD = IDD_Property_fluid };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV ֧��

	DECLARE_MESSAGE_MAP()
public:

	// //��ճ��
	double ID_Vari_Visc_Oil;
	// //ˮճ��
	double ID_Vari_Visc_Wat;
	// //���ܶ�
	double ID_Vari_Den_o;
	// //��ѹ��ϵ��
	double ID_Vari_Comp_o;
	double ID_VolumFactor_G;
	double ID_Sat_P;
	double ID_VolumFactor_W;
	double ID_CompFactor_T;
	// //�����ϵ��
	double ID_Vari_Volume_Factor;
	double ID_SolutP_ini;
	double ID_SolutP_Prent;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCheckP();
	afx_msg void OnBnSetfocusCheckP();
	afx_msg void OnBnClickedCancel();
};
