#include "functions.h"

int flag;
int score;

vector<randEvent> ranEvents;
vector<string> happenEvent;
void init()
{
	//��ʼ������
	p.Age = 0;
	p.EQ = 0;
	p.Health = 100;
	p.IQ = 0;
	p.ProgramingSkill = 0;


	//

	//��Ϣ��Ĵ�С
	const int BOX_WIDTH = 400;
	const int BOX_HEIGHT = 300;

	//��Ϣ���λ��
	const int BOX_X = 50;
	const int BOX_Y = 50;

	//ÿ�и߶�
	const int LINE_HEIGHT = 20;

	//�������
	const int MAX_LINES = BOX_HEIGHT / LINE_HEIGHT;

	//�����¼�������
	vector<string> messages;


	// ����ƫ��������ʾ��ǰ��ʾ����Ϣ����ʼ��
	int scroll_offset = 0;

	//������Ϣ��
	setfillcolor(WHITE);
	bar(BOX_X, BOX_Y, BOX_X + BOX_WIDTH, BOX_Y + BOX_HEIGHT);

	// ������Ϣ��ı߿�
	setlinecolor(BLACK);
	rectangle(BOX_X, BOX_Y, BOX_X + BOX_WIDTH, BOX_Y + BOX_HEIGHT);

	// ������Ϣ
	int start_line = scroll_offset;//��ʼ��
	int end_line = start_line + MAX_LINES;//������

	for (int i = start_line; i < end_line && i < messages.size(); ++i) 
	{
		//����ÿ����Ϣ
		outtextxy(BOX_X + 10, BOX_Y + 10 + (i - start_line) * LINE_HEIGHT, messages[i].c_str());//(i - start_line) * LINE_HEIGHTÿ�м��,messages[i].c_str()ת����c���Է����ַ���
	}
	
	//ͨ��"w","s"������Ϣ���ƶ�
	if (_kbhit()) //����Ƿ�������
	{
		char key = _getch();
		if (key == 'w' && scroll_offset > 0) {
			scroll_offset--;
		}
		else if (key == 's' && scroll_offset < messages.size() - MAX_LINES) {
			scroll_offset++;
		}
	}

}
void EventBonus()
{
	p.EQ += b.EQBonus;
	p.Health += b.HealthBonus;
	p.IQ += b.IQBonus;
	p.ProgramingSkill += b.ProgramingSkillBonus;
}