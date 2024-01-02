// C_IPR_SHOW.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "IPR.h"
#include "C_IPR_SHOW.h"
#include "afxdialogex.h"
#include "IPR_OPT.h"
#include <string>
#include <fontsub.h>
#include <afxwin.h> 
extern CIPR_OPT theIPR;


// C_IPR_SHOW �Ի���

IMPLEMENT_DYNAMIC(C_IPR_SHOW, CDialogEx)

C_IPR_SHOW::C_IPR_SHOW(CWnd* pParent /*=NULL*/)
	: CDialogEx(C_IPR_SHOW::IDD, pParent)
{

	EnableAutomation();

}

C_IPR_SHOW::~C_IPR_SHOW()
{
}

void C_IPR_SHOW::OnFinalRelease()
{
	// �ͷ��˶��Զ�����������һ�����ú󣬽�����
	// OnFinalRelease�����ཫ�Զ�
	// ɾ���ö����ڵ��øû���֮ǰ�����������
	// ��������ĸ���������롣

	CDialogEx::OnFinalRelease();
}

void C_IPR_SHOW::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(C_IPR_SHOW, CDialogEx)
	//ON_STN_CLICKED(IDC_IPR_RES, &C_IPR_SHOW::OnStnClickedIprRes)
	ON_BN_CLICKED(IDCANCEL, &C_IPR_SHOW::OnBnClickedClose)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(C_IPR_SHOW, CDialogEx)
END_DISPATCH_MAP()

// ע��: ������� IID_I_IPR_SHOW ֧��
//  ��֧������ VBA �����Ͱ�ȫ�󶨡��� IID ����ͬ���ӵ� .IDL �ļ��е�
//  ���Ƚӿڵ� GUID ƥ�䡣

// {045CE6A1-D128-4527-ADEF-DCB517BC6C4B}
static const IID IID_I_IPR_SHOW =
{ 0x45CE6A1, 0xD128, 0x4527, { 0xAD, 0xEF, 0xDC, 0xB5, 0x17, 0xBC, 0x6C, 0x4B } };

BEGIN_INTERFACE_MAP(C_IPR_SHOW, CDialogEx)
	INTERFACE_PART(C_IPR_SHOW, IID_I_IPR_SHOW, Dispatch)
END_INTERFACE_MAP()


// C_IPR_SHOW ��Ϣ�������


void C_IPR_SHOW::OnStnClickedIprRes()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
}


BOOL C_IPR_SHOW::OnInitDialog()
{
	CDialogEx::OnInitDialog();
	// TODO:  �ڴ���Ӷ���ĳ�ʼ��
	TCHAR Head[]=_T("��ͬ��ˮ�׶�ע�ɱȼ�������\r\n\r\n");
	TCHAR  T1[100];
	//("���ŵ�IPR��\r\n");
	//static TCHAR  IPR_STR[10];
	TCHAR IPR_STR[10];
	//gcvt(theIPR.IPR[0],5,IPR_STR);		
	//GetDlgItem(IDC_IPR_TEXT)->
	CFont font;

	VERIFY(font.CreateFont(
   25,                        // nHeight
   25,                         // nWidth
   0,                         // nEscapement
   0,                         // nOrientation
   FW_SEMIBOLD,                 // nWeight
   FALSE,                     // bItalic
   FALSE,                     // bUnderline
   0,                         // cStrikeOut
   GB2312_CHARSET,              // nCharSet
   OUT_DEFAULT_PRECIS,        // nOutPrecision
   CLIP_DEFAULT_PRECIS,       // nClipPrecision
   DEFAULT_QUALITY,           // nQuality
   DEFAULT_PITCH | FF_SWISS, // nPitchAndFamily
   L"����"));                 // lpszFacename
	
	CWnd *cWnd = GetDlgItem(IDC_IPR_TEXT);
	cWnd->SetFont(&font);
	cWnd->GetDC()->SetTextColor(RGB(0,255,200));

	theIPR.IPR_CMP();

	switch(theIPR.stage)
	{
	case 1:
		wcscpy(T1,Head);
		wcscat(T1,_T("��ˮ0-60%ע�ɱȣ�"));
		_stprintf(IPR_STR,_T("%.2f"),theIPR.IPR[0]);
		wcscat(T1,IPR_STR);
		
		wcscat(T1,_T("\r\n\r\n"));
		wcscat(T1,_T("��ˮ60-90%ע�ɱȣ�"));
		_stprintf(IPR_STR,_T("%.2f"),theIPR.IPR[1]);
		wcscat(T1,IPR_STR);
		GetDlgItem(IDC_IPR_TEXT)->SetWindowText(T1);
		
		wcscat(T1,_T("\r\n\r\n"));
		wcscat(T1,_T("��ˮ>90%ע�ɱȣ�"));
		wcscat(T1,_T("1"));
		GetDlgItem(IDC_IPR_TEXT)->SetWindowText(T1);	

		break;
	case 2:
		wcscpy(T1,Head);
		wcscat(T1,_T("��ˮ0-30%ע�ɱȣ�"));
		_stprintf(IPR_STR,_T("%.2f"),theIPR.IPR[0]);
		wcscat(T1,IPR_STR);
		
		wcscat(T1,_T("\r\n\r\n"));
		wcscat(T1,_T("��ˮ30%-60%ע�ɱȣ�"));
		_stprintf(IPR_STR,_T("%.2f"),theIPR.IPR[1]);
		wcscat(T1,IPR_STR);
		GetDlgItem(IDC_IPR_TEXT)->SetWindowText(T1);
		
		wcscat(T1,_T("\r\n\r\n"));
		wcscat(T1,_T("��ˮ60%-90%ע�ɱȣ�"));
		_stprintf(IPR_STR,_T("%.2f"),theIPR.IPR[2]);
		wcscat(T1,IPR_STR);
		GetDlgItem(IDC_IPR_TEXT)->SetWindowText(T1);

		wcscat(T1,_T("\r\n\r\n"));
		wcscat(T1,_T("��ˮ>90%ע�ɱȣ�"));
		wcscat(T1,_T("1"));
		GetDlgItem(IDC_IPR_TEXT)->SetWindowText(T1);	
		break;
	case 3:
		wcscpy(T1,Head);
		wcscat(T1,_T("��ˮ0-60%ע�ɱȣ�"));
		_stprintf(IPR_STR,_T("%.2f"),theIPR.IPR[0]);
		wcscat(T1,IPR_STR);
		
		wcscat(T1,_T("\r\n\r\n"));
		wcscat(T1,_T("��ˮ60%-90%ע�ɱȣ�"));
		_stprintf(IPR_STR,_T("%.2f"),theIPR.IPR[1]);
		wcscat(T1,IPR_STR);
		GetDlgItem(IDC_IPR_TEXT)->SetWindowText(T1);
		
		wcscat(T1,_T("\r\n\r\n"));
		wcscat(T1,_T("��ˮ90%-95%ע�ɱȣ�"));
		_stprintf(IPR_STR,_T("%.2f"),theIPR.IPR[2]);
		wcscat(T1,IPR_STR);
		GetDlgItem(IDC_IPR_TEXT)->SetWindowText(T1);

		wcscat(T1,_T("\r\n\r\n"));
		wcscat(T1,_T("��ˮ>95%ע�ɱȣ�"));
		wcscat(T1,_T("1"));
		GetDlgItem(IDC_IPR_TEXT)->SetWindowText(T1);		
		break;
	default:
		;
	}
	
	return TRUE;  // return TRUE unless you set the focus to a control
	// �쳣: OCX ����ҳӦ���� FALSE
}


void C_IPR_SHOW::OnBnClickedClose()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	CDialogEx::OnCancel();
}
