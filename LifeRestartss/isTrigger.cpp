#include<functions.h>


bool mainEvent::isTrigger(person p);
{
    // ��������Ƿ��������Ҫ��
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