#include "functions.h"

int flag;
int score;

vector<randEvent> ranEvents;
vector<string> happenEvent;

vector<YoungAgeChoices> YoungEvents;//�洢18����ǰ�������¼�
vector<examSocre> examScores = { {HighAttribute, 500, 700}, {MidAttribute, 300, 500 }, {LowAttribute, 100, 300} };


//GTд��
void gameLoop(person& p, mainEvent& event) {
	if (flag == 0) {
		if (p.Age == 17) {
			score = getScore(p.IQ);

			//��û�д�ѧ��ص��жϹ��ܣ�������ȥ���ĸ���ѧ

		}
		else {
			if (YoungEvents[p.Age].choices.size() > 1) {
				YoungEvents[p.Age].showYoungAgeChoices();
				//�ǲ��ǻ�Ҫ��һЩ��ֵ����ʲô
				Bonus delta = YoungEvents[p.Age].choices[0].improve;
				p.IQ += delta.IQBonus;
				p.EQ += delta.EQBonus;
				p.ProgramingSkill += delta.ProgramingSkillBonus;
				p.Health += delta.HealthBonus;
			}
			else if (YoungEvents[p.Age].choices.size() == 1) {
				//ֱ����ʾ�¼�
				YoungAgeChoices[p.Age].showYoungAgeChoices();
			}
		}
	}
	else if (flag == 1) {
		//�ǲ����и���ѧ��ص��¼���
		//ͨ�������¼�����Ȼ���������if(isTrigger())���ж��¼�����������
		//���걾���������и�ѡ��ѡ1����ѡ3�����������Լ������ߡ���ʧ�ܣ������4 ��ҵʱ�ڣ�

	}
	else if (flag == 2) {
		//�о���ʱ��


	}
	else if (flag == 3) {
		//����ʱ��
		//���жϹ���ʱ����û�ҵ�������Ҫ���¼���������û�ҵ����������������һ������
		//�������жϺ������жϴ�ҵ���Ƿ���ܷ������еĻ���ѡ��û�еĻ���ֱ�ӽ���ʧҵ��
	}
	else if (flag == 4) {
		//��ҵ�ڣ��ü�����ͬ�׶ε��¼����������������ᴥ����Щ����
		//���жϴ�ҵ�ߣ���ҵ�ߵ��������ƱȽ�����
		//��ҵ�ڵĺ��Ĵ�����ѡ�񣬿���ѡ������һ����
	}
	else if (flag == 5) {
		//����ʱ�ڣ�����һ������С��
		//ֱ�ӱ��������ж��ӽڵ��Ƿ񳬹�һ��
		//�ӽڵ㳬��һ���͵���isTrigger();
	}
	else if (flag == 6) {
		//
	}
	else if (flag == 7) {

	}
	else if (flag == 8) {

	}
	else if (flag == 9 {

	}
	
}