#pragma once
class AActor
{
public: //interface
	AActor();
	~AActor();

	void Move();

	int GetHP() { return HP; }
	void SetHP(int NewHP) 
	{
		if (NewHP >= 0)
		{
			HP = NewHP;
		}
	}
protected: 
//private:

	int HP;
};

//					����					���
//public			�ƹ��볪 ����			���
//protected			����					���
//private			����					���X

