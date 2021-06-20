#pragma once
#include "Dataset.h"
#include "FlowerSet.h"
class FlowerSet;

// 定数の定義
#define REPEAT_NUM 1000 // 繰り返し数
#define EBEE_NUM 100		// 収穫バチの数
#define OBEE_NUM 10			// 追従バチの数
#define VISIT_MAX 10		// 蜜の採集可能回数
#define COEF_MIN -1			// 標準偏回帰係数の最小値
#define COEF_MAX 1			// 標準偏回帰係数の最大値

// 0以上1以下の実数乱数
#define RAND_01 ((double)rand() / RAND_MAX)
#pragma once
#include "Flower.h"
class Flower;

class FlowerSet
{
public:
	FlowerSet(char *fileName);
	~FlowerSet();
	void employedBeePhase(); // 収穫バチフェーズを実行する
	void onlookerBeePhase(); // 追従バチフェーズを実行する
	void scoutBeePhase();		 // 偵察バチフェーズを実行する
	void saveBestPos();			 // 最良食糧源を記録する
	void printResult();			 // 結果を表示する

	Dataset *dataset; // データセット
	Flower **flower;	// 食糧源の集合のメンバ
	double *bestPos;	// 最良食糧源の位置
	double bestValue; // 最良食糧源の評価値

private:
	Flower *newFlower; // 新しい食糧源
	double *trValue;	 // 角食糧源の変換後の評価値
};
