#if !defined(AFX_HOWTOUSEDLG_H__6881BBCF_0D1E_4D05_BA28_2D51A6335E59__INCLUDED_)
#define AFX_HOWTOUSEDLG_H__6881BBCF_0D1E_4D05_BA28_2D51A6335E59__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// HowtoUseDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CHowtoUseDlg dialog

class CHowtoUseDlg : public CDialog {
// Construction
public:
  CHowtoUseDlg(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
  //{{AFX_DATA(CHowtoUseDlg)
  enum { IDD = IDD_HOWTOUSE };
    // NOTE: the ClassWizard will add data members here
  //}}AFX_DATA


// Overrides
  // ClassWizard generated virtual function overrides
  //{{AFX_VIRTUAL(CHowtoUseDlg)
  protected:
  virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
  //}}AFX_VIRTUAL

// Implementation
protected:
  // Generated message map functions
  //{{AFX_MSG(CHowtoUseDlg)
  virtual BOOL OnInitDialog();
  //}}AFX_MSG
  DECLARE_MESSAGE_MAP()
public:
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HOWTOUSEDLG_H__6881BBCF_0D1E_4D05_BA28_2D51A6335E59__INCLUDED_)
