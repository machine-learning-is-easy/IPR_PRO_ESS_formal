// C_PVT_INPUT.cpp : ʵ���ļ�
//



// C_PVT_INPUT ��Ϣ�������


/*

void C_PVT_INPUT::OnBnClickedOk()
{
	// TODO: �ڴ���ӿؼ�֪ͨ����������
	//CDialogEx::OnOK();
	if(UpdateData(true)!=0)
	{
	//UpdateData(false);
	char Ct_string[10],N_string[20],INI_PRESSURE_string[20],N_stage_string[20],P_reasonable_ctring[20],Swc_ctring[20];
	//GetDlgItem(IDC_PRESS_INI)->GetWindowText(Ct_string,10);
	SendDlgItemMessage(IDC_PRESS_INI,WM_GETTEXT,20,(LPARAM)INI_PRESSURE_string);
	SendDlgItemMessage(IDC_RESERVE,WM_GETTEXT,20,(LPARAM)N_string);
	SendDlgItemMessage(IDC_Swc,WM_GETTEXT,20,(LPARAM)Swc_ctring);
	SendDlgItemMessage(IDC_STAGE,WM_GETTEXT,20,(LPARAM)N_stage_string);
	SendDlgItemMessage(IDC_COMPRESSIBLITY,WM_GETTEXT,20,(LPARAM)Ct_string);	
	SendDlgItemMessage(IDC_PRESSURE_REASON,WM_GETTEXT,20,(LPARAM)P_reasonable_ctring);	


	INI_PRESSURE_input=atof(INI_PRESSURE_string);
	N_input=atof(N_string);
	// ����
	Swc_input=atof(Swc_ctring);
	// ����ز�ѹ��
	P_reasonable_input=atof(P_reasonable_ctring);
	// �ز�ѹ��ϵ��
	Ct_input=atof(Ct_string);
	// ѹ��ϵ��
	N_stage_input=atoi(N_stage_string);
	// �׶λ���

	theApp.stage=N_stage_input;
	theApp.Compressibility=Ct_input;
	theApp.Conate_Water_Saturation=Swc_input;
	theApp.Ini_pressure=INI_PRESSURE_input;
	theApp.N_reserves=N_input;
	theApp.Pressure_reasonable=P_reasonable_input;	

	EndDialog(1);

	}
	else
	{
	}
}
*/