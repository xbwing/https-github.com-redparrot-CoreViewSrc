// CVEncryptDllTestDlg.h : 头文件
//

#pragma once


// CCVEncryptDllTestDlg 对话框
class CCVEncryptDllTestDlg : public CDialog
{
// 构造
public:
	CCVEncryptDllTestDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_CVENCRYPTDLLTEST_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
public:
	afx_msg void OnBnClickedOk2();
public:
	afx_msg void OnBnClickedOk3();
public:
    afx_msg void OnBnClickedOk4();
public:
    afx_msg void OnBnClickedOk5();
};
