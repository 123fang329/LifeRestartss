#include "functions.h"

int flag;
int score;

vector<randEvent> ranEvents;
vector<string> happenEvent;

vector<YoungAgeChoices> YoungEvents;//�洢18����ǰ�������¼�
vector<examSocre> examScores = { {HighAttribute, 500, 700}, {MidAttribute, 300, 500 }, {LowAttribute, 100, 300} };


void gameLoop(person& p, mainEvent& event) {
	for (p.Age = 0; p.Age <= 100; p.Age++) {
		if (flag == 0) {
			if (p.Age == 17) {
				score = getScore(p.IQ);
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

		}
		else if (flag == 2) {

		}
		else if (flag == 3) {

		}
		else if (flag == 4) {

		}
		else if (flag == 5) {

		}
		else if (flag == 6)
	}

	
}