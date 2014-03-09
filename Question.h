#ifndef _QUESTION_H_GUARD_
#define _QUESTION_H_GUARD_

#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <map>
#include <cctype>
#include <time.h>
#include <stdlib.h>

class Question
{
private:
	std::vector<std::string> Questions;
	std::vector<std::string> Answers1;
	std::vector<std::string> Answers2;
	std::vector<std::string> Answers3;
	std::vector<std::string> Answers4;

	std::string QuestionText;
	std::string Answer1;
	std::string Answer2;
	std::string Answer3;
	std::string Answer4;
	std::string CorrectAnswer;
	int DifficultyLevel;

public:
	void GetQuestion();
	void GetAnswers();
	void GetCorrectAnswer();
	void LoadFromFile(int DifficultyLevel);
};

#endif