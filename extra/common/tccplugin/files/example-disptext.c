#define PLUGIN_INTERNAL_NAME "DISPTEXT"
#define PLUGIN_FRIENDLY_NAME "��ʾ����"
#define PLUGIN_VERSION "v1.1"
#ifdef BUILD_FOR_PAL3
#define USE_PAL3_DEFINITIONS
#include "PAL3patch.h"
#endif
#ifdef BUILD_FOR_PAL3A
#define USE_PAL3A_DEFINITIONS
#include "PAL3Apatch.h"
#endif

// �����Ƿ���ʾ���ֵı��� 
static int display_text_flag = 1; // Ĭ��Ϊ����

// ֡������
static int frame_cnt = 0;


// �����ô�����Ϣ���Ӻ��� 
static void display_text_wndproc_hook(void *arg)
{
    struct wndproc_hook_data *data = arg;

    // ��F1�������� 
    if (data->Msg == WM_KEYUP && data->wParam == VK_F1) {

        // �л����Ʊ�����ֵ
        display_text_flag ^= 1;

        // ���÷���ֵ����ְֹ����
        data->retvalue = 0;
        data->processed = 1;

    }
}

// ��ʾ�ı��ĺ��� 
static void display_text()
{
    // ������ʱ�ַ��� 
    struct wstr msg; wstr_ctor(&msg);

    // ����֡������
    frame_cnt++;

    // ���Ҫ��ʾ���� 
    if (display_text_flag) {

        // ��ʼ��ӡ����
        print_wstring_begin();

        // ��ӡԭʼ��С������
        print_wstring(FONTID_U12, L"U12\nHello World!\n��ã����磡", 100, 100, 0xFFFF0000);
        print_wstring(FONTID_U16, L"U16\nHello World!\n��ã����磡", 300, 100, 0xFFFF0000);
        print_wstring(FONTID_U20, L"U20\nHello World!\n��ã����磡", 500, 100, 0xFFFF0000);

        // ��ӡ����Ļ��С���Զ��Ŵ������
        print_wstring(FONTID_U12_SCALED, L"U12_SCALED\nHello World!\n��ã����磡", 100, 200, 0xFFFF0000);
        print_wstring(FONTID_U16_SCALED, L"U16_SCALED\nHello World!\n��ã����磡", 300, 200, 0xFFFF0000);
        print_wstring(FONTID_U20_SCALED, L"U20_SCALED\nHello World!\n��ã����磡", 500, 200, 0xFFFF0000);

        // ��ӡ˵������
        wstr_format(&msg, L"��ǰ֡Ϊ %d���� F1 ���л�������ʾ", frame_cnt);
        print_wstring(FONTID_U20, wstr_getwcs(&msg), 100, 10, 0xFFFF0000);

        // ������ӡ����
        print_wstring_end();

    }

    // ������ʱ�ַ��� 
    wstr_dtor(&msg);
}


MAKE_PLUGINABOUT()
MAKE_PLUGINENTRY() // �����ں��������ڲ������ʱ������
{
    // ������ݽṹ��С 
#ifdef BUILD_FOR_PAL3
    PAL3_STRUCT_SELFCHECK();
#endif
#ifdef BUILD_FOR_PAL3A
    PAL3A_STRUCT_SELFCHECK();
#endif

    // �ڳ������ƽ���ǰ�������ǵ���ʾ���ֺ���
    add_preendscene_hook(display_text);

    // ��Ӵ�����Ϣ���Ӻ���
    add_postwndproc_hook(display_text_wndproc_hook);

    return 0;
}
