// C_CDdialog_Reservoir.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "IPR.h"
#include "C_CDdialog_Reservoir.h"
#include "afxdialogex.h"
#include "IPR_OPT.h"


// C_CDdialog_Reservoir �Ի���

IMPLEMENT_DYNAMIC(C_CDdialog_Reservoir, CDialogEx)

C_CDdialog_Reservoir::C_CDdialog_Reservoir(CWnd* pParent /*=NULL*/)
	: CDialogEx(C_CDdialog_Reservoir::IDD, pParent)
	, ID_Vari_Pre_Ini(0)
	, ID_Vari_Pres_Opt(0)
	, ID_Vari_Reserves(0)
	, ID_Vari_Reserve_rec(0)
{

}

C_CDdialog_Reservoir::~C_CDdialog_Reservoir()
{
}

void C_CDdialog_Reservoir::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_PRESS_INI, ID_Vari_Pre_Ini);
	DDV_MinMaxFloat(pDX, ID_Vari_Pre_Ini, 5, 100);
	DDX_Text(pDX, IDC_PRESS_Opt, ID_Vari_Pres_Opt);
	DDV_MinMaxFloat(pDX, ID_Vari_Pres_Opt, 0, 100);
	DDX_Text(pDX, IDC_RESERVES, ID_Vari_Reserves);
	DDV_MinMaxFloat(pDX, ID_Vari_Reserves, 0, 1000000);
	DDX_Text(pDX, IDC_RESERVES_RECOV, ID_Vari_Reserve_rec);
	DDV_MinMaxFloat(pDX, ID_Vari_Reserve_rec, 0, 1000000);
}


BEGIN_MESSAGE_MAP(C_CDdialog_Reservoir, CDialogEx)
	ON_EN_CHANGE(IDC_PRESS_INI, &C_CDdialog_Reservoir::OnEnChangePressIni)
	ON_BN_CLICKED(IDOK, &C_CDdialog_Reservoir::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &C_CDdialog_Reservoir::OnBnClickedCancel)
END_MESSAGE_MAP()


// C_CDdialog_Reservoir ��Ϣ�������


void C_CDdialog_Reservoir::OnEnChangePressIni()
{
	// TODO:  ����ÿؼ��� RICHEDIT �ؼ���������
	// ���ʹ�֪ͨ��������д CDialogEx::OnInitDialog()
	// ���������� CRichEditCtrl().SetEventMask()��
	// ͬʱ�� ENM_CHANGE ��־�������㵽�����С�

	// TODO:  �ڴ���ӿؼ�֪ͨ����������
}


void C_CDdialog_Reservoir::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//CDialogEx::OnOK();
	if(UpdateData(true)!=0)
	{
	//UpdateData(false);
	char Pre_Ini_str[10],Pres_Opt_str[20];
	char Reserves_str[10],Reserv_rec_str[20];
	//GetDlgItem(IDC_PRESS_INI)->GetWindowText(Ct_string,10);
	SendDlgItemMessage(IDC_PRESS_INI,WM_GETTEXT,20,(LPARAM)Pre_Ini_str);
	SendDlgItemMessage(IDC_PRESS_Opt,WM_GETTEXT,20,(LPARAM)Pres_Opt_str);
	SendDlgItemMessage(IDC_RESERVES,WM_GETTEXT,20,(LPARAM)Reserves_str);
	SendDlgItemMessage(IDC_RESERVES_RECOV,WM_GETTEXT,20,(LPARAM)Reserv_rec_str);

	//ID_Vari_Pre_Ini=atof(Pre_Ini_str);
	//ID_Vari_Pres_Opt=atof(Pres_Opt_str);	
	
	theIPR.Ini_pressure=ID_Vari_Pre_Ini;
	theIPR.Pressure_reasonable=ID_Vari_Pres_Opt;
	theIPR.Reserves=atof(Reserves_str);
	theIPR.Reserves_recov=atof(Reserv_rec_str);	

	EndDialog(1);

	}
	else
	{
	}
}


void C_CDdialog_Reservoir::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
