// C_CDialog_Stage.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "IPR.h"
#include "C_CDialog_Stage.h"
#include "afxdialogex.h"
#include "IPR_OPT.h"


// C_CDialog_Stage �Ի���

IMPLEMENT_DYNAMIC(C_CDialog_Stage, CDialogEx)

C_CDialog_Stage::C_CDialog_Stage(CWnd* pParent /*=NULL*/)
	: CDialogEx(C_CDialog_Stage::IDD, pParent)
{

}

C_CDialog_Stage::~C_CDialog_Stage()
{
}

void C_CDialog_Stage::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(C_CDialog_Stage, CDialogEx)
	ON_BN_CLICKED(IDC_RADIO1, &C_CDialog_Stage::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &C_CDialog_Stage::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO3, &C_CDialog_Stage::OnBnClickedRadio3)
	ON_BN_CLICKED(IDOK, &C_CDialog_Stage::OnBnClickedOk)
	ON_BN_CLICKED(IDCANCEL, &C_CDialog_Stage::OnBnClickedCancel)
END_MESSAGE_MAP()


// C_CDialog_Stage ��Ϣ�������


void C_CDialog_Stage::OnBnClickedRadio1()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	theIPR.stage=1;
}


void C_CDialog_Stage::OnBnClickedRadio2()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	theIPR.stage=2;
}


void C_CDialog_Stage::OnBnClickedRadio3()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	theIPR.stage=3;
}


void C_CDialog_Stage::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnOK();
}


void C_CDialog_Stage::OnBnClickedCancel()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
