#include "functions.h"

int flag;
int score;

vector<randEvent> ranEvents;
vector<string> happenEvent;


/*
 �����ˣ�����
�ж��¼��Ƿ���������
    ���ܣ��������ﵱǰ����ֵ �ж��Ƿ���Է������¼�
    ������person
    ����ֵ��bool
*/
bool isTrigger(person p)
{
    if (p.IQ < eventlimit.IQ || p.EQ < eventlimit.EQ || p.ProgramingSkill < eventlimit.ProgramingSkill || p.Health < eventlimit.Health)
    {
        return false; // ���Բ���������
    }

    struct YoungAgeChoices y;
    if (p.Age == y.age)
    {
        return ture;
    }
}


/*
     �����ˣ�����
     ���ܣ�
         չ������¼������Ľ����������¼���
     ������void
     ����ֵ��void
 */
void showRandEvent()
{
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


void endView();
{
    initgraph(640, 480); // ����һ����640���أ���480���صĴ���
    setbkcolor(GREEN); // ���ñ�����ɫ
    cleardevice(); // �����Ļ
    settextstyle(24, 0, _T("Arial")); // �����ı�����ΪArial����СΪ24
    settextcolor(BLACK); // �����ı���ɫΪ��ɫ

    outtextxy(50, 50, _T("��Ϸ������")); // ��ʾ��Ϸ����

    outtextxy(50, 100, Ending); // ��ʾ�����Ϣ
    setfillcolor(BLUE); // ���������ɫΪ��ɫ
    setlinecolor(BLUE); // ���ñ߿���ɫΪ��ɫ
    fillrectangle(220, 200, 420, 230); // ���ƾ��ΰ�ť
    settextstyle(20, 0, _T("Arial")); // �����ı�����ʹ�С
    settextcolor(WHITE); // �����ı���ɫΪ��ɫ
    outtextxy(250, 210, _T("�������˵�")); // ��ʾ��ť�ı�
    fillrectangle(220, 250, 420, 280); // ���ƾ��ΰ�ť
    outtextxy(250, 260, _T("���¿�ʼ��Ϸ")); // ��ʾ��ť�ı�
    MOUSEMSG m;
    while (true) {
        m = GetMouseMsg();
        if (m.uMsg == WM_LBUTTONDOWN) { // ������������
            if (m.x >= 220 && m.x <= 420 && m.y >= 200 && m.y <= 230) { // �������˵���ť
                return menuView(); // ���÷������˵��ĺ���
            }
            if (m.x >= 220 && m.x <= 420 && m.y >= 250 && m.y <= 280) { // ���¿�ʼ��Ϸ��ť
                return gameBeignView(); // ���ÿ�ʼ��Ϸ�ĺ���
            }
        }
    }
    closegraph(); // �ر�ͼ�δ���
}
