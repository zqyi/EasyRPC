#include "Authentication.h"

void CAuthentication::UserApplyReg(::google::protobuf::RpcController * controller, const::Auth::UserInfo * request, ::Auth::ResponseMsg * response, ::google::protobuf::Closure * done)
{
	std::cout << "�û���" << request->phonenum() << "����" << std::endl;
	response->set_code(0);
	response->set_message("��������");
}

void CAuthentication::UserRegister(::google::protobuf::RpcController * controller, const::Auth::UserInfo * request, ::Auth::ResponseMsg * response, ::google::protobuf::Closure * done)
{
	std::cout << "�û���" << request->phonenum() << ", ���� " << request->password() << "����ע��" << std::endl;
	response->set_code(0);
	response->set_message("ע��ɹ�");
}

void CAuthentication::UserLogin(::google::protobuf::RpcController * controller, const::Auth::UserInfo * request, ::Auth::ResponseMsg * response, ::google::protobuf::Closure * done)
{
	std::cout << "�û���" << request->phonenum() << ", ���� " << request->password() << "���ڵ�½" << std::endl;
	response->set_code(0);
	response->set_message("��½�ɹ�");
}
