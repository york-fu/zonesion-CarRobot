/*********************************************************************************************
* �ļ���helloworld.c
* ���ߣ�Lixm 2017.01.20
* ˵����hello world ����
* �޸ģ�Chenkm 2017.02.16 ����ע��
* ע�ͣ�
*
*********************************************************************************************/
/*********************************************************************************************
* ͷ�ļ�
*********************************************************************************************/
#include <contiki.h>
#include <stdio.h>

/*********************************************************************************************
* ����:PROCESS_THREAD()
* ����:hello world ���̶���
* ����:��
* ����:��
* �޸�:
* ע��:
*********************************************************************************************/
PROCESS(helloworld, "helloworld");

PROCESS_THREAD(helloworld, ev, data)
{
  PROCESS_BEGIN();
  printf("hello world\r\n");
  PROCESS_END();
}