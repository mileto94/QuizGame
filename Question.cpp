#include "Question.h"

void Question::GetAnswers()
{
	srand (time(NULL));
	int answerNumber = rand() % ( this->Questions.size() );
	this->Answer1 = this->Answers1[answerNumber];
	this->Answer2 = this->Answers2[answerNumber];
	this->Answer3 = this->Answers3[answerNumber];
	this->Answer4 = this->Answers4[answerNumber];
}

void Question::GetQuestion()
{
	srand (time(NULL));
	int questionNumber = rand() % ( this->Questions.size() );
	this->QuestionText = this->Questions[questionNumber];
}

void Question::GetCorrectAnswer()
{
	//stuff
}

void Question::LoadFromFile(int DifficultyLevel)
{
	std::string filename = "Q" + std::to_string(DifficultyLevel) + ".txt";
	std::ifstream file (filename);

	this->Questions.empty();

    if ( ! file.is_open() )
    {
        std::cout << "couldn't open file" << std::endl;
    }

    std::string line;
    while (std::getline(file, line))
    {
		if (line.find("Q:") == 0)
		{
			int index = 2;
			while (! isalpha(line[index]))
				index++;

			std::string question = line.substr(index);
			this->Questions.push_back(question);
		}

		else if (line.find("A1:") == 0)
		{
			int index = 3;
			while (! isalpha(line[index]))
				index++;

			std::string answer1 = line.substr(index);
			this->Answers1.push_back(answer1);
		}

		else if (line.find("A2:") == 0)
		{
			int index = 3;
			while (! isalpha(line[index]))
				index++;

			std::string answer2 = line.substr(index);
			this->Answers2.push_back(answer2);
		}

		else if (line.find("A3:") == 0)
		{
			int index = 3;
			while (! isalpha(line[index]))
				index++;

			std::string answer3 = line.substr(index);
			this->Answers3.push_back(answer3);
		}
        
		else if (line.find("A4:") == 0)
		{
			int index = 3;
			while (! isalpha(line[index]))
				index++;

			std::string answer4 = line.substr(index);
			this->Answers4.push_back(answer4);
		}

    }

	file.close();
}
