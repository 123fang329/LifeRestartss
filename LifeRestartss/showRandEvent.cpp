#include <graphics.h>
#include <functions.h>


void showRandEvent(const randEvent& re) {
    initgraph(WINDOW_WIDTH, WINDOW_HEIGHT); // ��ʼ��ͼ�δ���

    // �����ı���ʽ
    settextcolor(BLACK);
    settextstyle(24, 0, _T("����"));

    // �����¼�����
    outtextxy(50, 50, re.description);
    outtextxy(50, 70, re.effect);

    

    // �ر�ͼ�δ���
    closegraph();
}

