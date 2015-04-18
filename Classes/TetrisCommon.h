#ifndef  __TETRIS_COMMON_H__
#define __TETRIS_COMMON_H__

#pragma  once

//ÿ������ĳ��ȺͿ��
const int C_W_RECT = 30;
const int C_H_RECT = 30;

//����������
const int C_ROW = 20;
const int C_COLUMN = 20;

const int C_ROW_BOTTOM = C_ROW;

enum TetrisKind
{
	E_1,//��
	E_2_1,//��ֱ��
	E_2_2,//��ֱ��
	E_3_1,//L��̬1
	E_3_2,//L��̬2
	E_3_3,//L��̬3
	E_3_4,//L��̬4
	E_4_1,//������̬1
	E_4_2,//������̬2
	E_5_1,//����̬1
	E_5_2,//����̬2
	E_5_3,//����̬3
	E_5_4,//����̬4
};

struct Block
{
	bool is_block;//��ǰ�����Ƿ��з���
	int row;
	int column;
	/*struct Block Copy(struct Block b)
	{

	}*/
};



#endif