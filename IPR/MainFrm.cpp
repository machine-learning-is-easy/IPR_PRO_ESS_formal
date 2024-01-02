
// MainFrm.cpp : CMainFrame ���ʵ��
//

#include "stdafx.h"
#include "IPR.h"
#include "C_PVT_INPUT.h"
//#include "matlib.h"
//#include <GL/glut.h>

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// CMainFrame

IMPLEMENT_DYNCREATE(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_CREATE()
	ON_COMMAND(ID_FILE_SAVE_AS, &CMainFrame::OnFileSaveAs)

	ON_COMMAND(ID_PLOT, &CMainFrame::OnPlot)
END_MESSAGE_MAP()

static UINT indicators[] =
{
	ID_SEPARATOR,           // ״̬��ָʾ��
	ID_INDICATOR_CAPS,
	ID_INDICATOR_NUM,
	ID_INDICATOR_SCRL,
};

// CMainFrame ����/����

CMainFrame::CMainFrame()
{
	// TODO: �ڴ���ӳ�Ա��ʼ������
}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (!m_wndStatusBar.Create(this))
	{
		TRACE0("δ�ܴ���״̬��\n");
		return -1;      // δ�ܴ���
	}
	m_wndStatusBar.SetIndicators(indicators, sizeof(indicators)/sizeof(UINT));
	
	SetWindowLong(m_hWnd,GWL_STYLE,WS_OVERLAPPEDWINDOW);

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ
	cs.cx=1000;
	cs.cy=600;
	cs.style = WS_OVERLAPPED | FWS_ADDTOTITLE
		 | WS_THICKFRAME | WS_MINIMIZEBOX | WS_SYSMENU;	
	
	cs.style&=~FWS_ADDTOTITLE;
	//cs.lpszName="IPR";

	return TRUE;
}

// CMainFrame ���

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}
#endif //_DEBUG


// CMainFrame ��Ϣ�������



void CMainFrame::OnFileSaveAs()
{
	// TODO: �ڴ���������������

}


void CMainFrame::OnPlot()
{
	// TODO: �ڴ���������������
//	 begin_scope
//    
//    initM(MATCOM_VERSION);
//
//  dMm(x); dMm(y); dMm(h_menu); dMm(h_submenu1); dMm(h_submenu2); dMm(handle); 
//  
//  #line 1 "d:/matcom/sin1111.m"
//  call_stack_begin;
//  #line 1 "d:/matcom/sin1111.m"
//_ x = colon(-pi,pi/10.0,pi);
//  #line 2 "d:/matcom/sin1111.m"
//_ y = tan(sin(x))-sin(tan(x));
//  #line 3 "d:/matcom/sin1111.m"
//_ display( figure((CL(1.0))) );
//  #line 3 "d:/matcom/sin1111.m"
//  // ����һ��ͼ�δ�
//  #line 4 "d:/matcom/sin1111.m"
//_ set(gcf(),(CL(TM("MenuBar")),TM("none")));
//  #line 5 "d:/matcom/sin1111.m"
////_ h_menu = uimenu((CL(gcf()),TM("label"),TM("Color")));
//  #line 5 "d:/matcom/sin1111.m"
//  // �����û�����˵��� Color <2>
//  #line 6 "d:/matcom/sin1111.m"
////_ h_submenu1 = uimenu((CL(h_menu),TM("label"),TM("Blue"),TM("callback"),TM("sin1111#0000")));
//  #line 7 "d:/matcom/sin1111.m"
//  //<4>
//  #line 8 "d:/matcom/sin1111.m"
////_ h_submenu2 = uimenu((CL(h_menu),TM("label"),TM("Red"),TM("callback"),TM("sin1111#0001")));
//  #line 9 "d:/matcom/sin1111.m"
//  // % ���������˵� Red <5> <6> 
//  
//  #line 11 "d:/matcom/sin1111.m"
//_ handle = plot((CL(x),y,TM("--rs"),TM("LineWidth"),3.0,TM("MarkerEdgeColor"),TM("k"),TM("MarkerFaceColor"),TM( \
//    "g"),TM("MarkerSize"),10.0));
//  
//  call_stack_end;
//
//  exitM();
//
//  end_scope

}
