����˵����

  (1) ȷ���Ѿ���װ tcc��Ҳ�ѱ��� PAL3patch
  (2) �޸� tccplugin\Makefile �����е�
         PAL3PATCH_INCLUDE_PATH
         PAL3PATCH_LIBRARY_PATH
         PAL3PATCH_INCLUDE_PATH
         PAL3PATCH_LIBRARY_PATH
         LIBTCC_INCLUDE_PATH
         LIBTCC_LIBRARY_PATH
      ָ����ȷ��Ŀ¼
  (3) �� MSYS �н��� tccplugin Ŀ¼�������� make
      �˺�Ӧ�� tccplugin\PAL3\tccplugin.dll �� tccplugin\PAL3A\tccplugin.dll ����


��װ˵����

  ������Ϊ����������Ϸ��װ�� C:\PAL3 Ŀ¼��
  ��Ӧ������Ŀ¼/�ļ���

    C:\PAL3\plugins\tcc.plugin                // TCC ��������ļ������� files\tcc.plugin
    C:\PAL3\plugins\tcc\tccplugin.dll         // TCC ��� DLL�����Ըձ���õ� tccplugin\PAL3\tccplugin.dll
    C:\PAL3\plugins\tcc\init.c                // TCC ��ʼ��Դ�룻���� files\init.c
    C:\PAL3\plugins\tcc\compile.bat           // ���빤�ߣ����� files\PAL3\compile.bat
    C:\PAL3\plugins\tcc\to_utf8.c             // UTF-8 ת�빤�ߣ����� files\to_utf8.c
    C:\PAL3\plugins\tcc\*                     // TCC ��װĿ¼�µ������ļ�
    C:\PAL3\plugins\tcc\include\libtcc.def    // libtcc ͷ�ļ������� TCC ��װĿ¼�� libtcc\libtcc.h
    C:\PAL3\plugins\tcc\lib\libtcc.def        // libtcc ���ļ������� TCC ��װĿ¼�� libtcc\libtcc.def
    C:\PAL3\plugins\tcc\include\PAL3patch.h   // PAL3patch ͷ�ļ�
    C:\PAL3\plugins\tcc\include\PAL3patch\*   // PAL3patch ͷ�ļ�
    C:\PAL3\plugins\tcc\lib\PAL3patch.def     // PAL3patch ���ļ�
    C:\PAL3\plugins\tcc\include\tccplugin.h   // tccplugin ͷ�ļ������� tccplugin\tccplugin.h
    C:\PAL3\plugins\tcc\lib\tccplugin.def     // tccplugin ���ļ����������ɵ� tccplugin\PAL3\tccplugin.def

  ���⻹�谴�� tcc ��˵�������ʵ��� winapi ͷ�ļ���װ�� include/winapi Ŀ¼�¡�


ʹ��˵����

  �� C Դ������ʽ�Ĳ������ plugins �¼��ɣ�TCC ������Զ�Ѱ�Ҳ����ء�
  ���뽫 C Դ������ʽ�Ĳ������Ϊ DLL ��ʽ���� C Դ�����ļ��Ϸŵ� compile.bat �ϼ��ɡ�


ע�⣺

  TCC ������޸� fastcall��֧�� UTF-8���������� call �İ汾�������������⡣v0.9.27 ������ЩҪ��
