#pragma once

int port_write_memory(const void* address,const void* buffer,int size);
int	port_make_executeable( const void* buffer,int size );//ʹ�û�������ִ��
const void* port_help_get_function( const char* modulename,const char* functionname );
const void* port_help_get_function2( const void* pmodule,const char* functionname );
const void* port_help_get_modulehandle( const char* modulename,int loadifnotexist );//loadifnotexist��������ڣ��ټ���
void*		port_alloc_fix_address( const unsigned char* address,int size );//����һ���̶���ַ���ڴ棬Ȩ��ΪRW
void		port_free_fix_address( const void* address );//����һ���̶���ַ���ڴ棬Ȩ��ΪRW
int			port_get_module_size( const void* hmodule );
const void** port_get_import_slot( const void* pmodule,const char* pimportmodule,const char* pimportfunction);//ȡ�õ��������,��ŵ��뺯����ַ��λ��,