#include <stdio.h>
#include "WebService.h"
#include "Authentication.h"
//Rcp �������ʾ
int main()
{
	//����web�ӿ��߳�
	WebService  *pSrvProc = new WebService();
	pSrvProc->RegisterService(new CAuthentication);

	CHttpServerPtr pHttpSrv(pSrvProc);
	
	if (pHttpSrv->Start("0.0.0.0", 9090))
	{
		printf("����web server �ɹ�");
	}
	else
	{
		printf("����web server ʧ��");
	}

	while (true)
	{
		Sleep(10000);
	}
}