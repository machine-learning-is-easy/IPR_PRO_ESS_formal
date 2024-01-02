
// IPRView.h : CIPRView ��Ľӿ�
//

#pragma once


class CIPRView : public CView
{
protected: // �������л�����
	CIPRView();
	DECLARE_DYNCREATE(CIPRView)

// ����
public:
	CIPRDoc* GetDocument() const;


// ����
public:
	void CIPRView::OnPvt();

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// ʵ��
public:
	virtual ~CIPRView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()
public:

	afx_msg void OnRes();
	afx_msg void OnScal();
	afx_msg void OnPropertyfluid();
	afx_msg void OnStage();
	afx_msg void OnFileSaveAs();
	afx_msg void OnFileSave();
	afx_msg void OnFileOpen();
	afx_msg void OnInputData();
	afx_msg void OnPlotFig();
	afx_msg void OnWctvsrecv();
	afx_msg void OnCumlqdvswct();
	afx_msg void OnWatindx();
	afx_msg void OnWctRecRatio();
	afx_msg void OnResidwat();
	afx_msg void OnPaint();
	int FIG_TYPE;
	afx_msg void OnWctFig();
	afx_msg void OnTshModel();
	afx_msg void OnTshModelM();
	afx_msg void OnSwptEff();
	afx_msg void OnIprOpt();
	afx_msg void OnIprInf();
};

#ifndef _DEBUG  // IPRView.cpp �еĵ��԰汾
inline CIPRDoc* CIPRView::GetDocument() const
   { return reinterpret_cast<CIPRDoc*>(m_pDocument); }
#endif

