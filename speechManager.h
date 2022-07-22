#pragma once
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
#include<deque>
#include<numeric>
#include<string>
#include<functional>
#include<fstream>
#include"speaker.h"
using namespace std;

class SpeechManager
{
public:
	SpeechManager();

	void initSpeech();

	void createSpeaker();

	void startSpeech();

	void speechdraw();

	void speechcontest();

	void showScore();

	void saveRecord();

	void loadRecord();

	bool fileIsEmpty;

	map<int, vector<string>> m_Record;

	void showRecord();

	void clearRecord();

	void show_Menu();

	void exitSystem();

	vector<int> v1;

	vector<int> v2;

	vector<int> vVictory;

	map<int,Speaker> m_Speaker;

	int m_Index; 
	~SpeechManager();
	
};