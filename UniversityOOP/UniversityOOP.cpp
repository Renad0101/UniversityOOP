
#include <iostream>
#include<vector>
#include<string>
#include<iomanip>

using namespace std;

# include "BankCard.h"
# include"Bank.h"
# include"Lesson.h"
# include "Students.h"
# include "Group.h"
# include "Exam.h"
# include "Teachers.h"
#include "Universe.h"


int main()
{


	student s("Cavid", "Aliyev", "Developer", 98, 300, bankcard("56789123456789222131234", "cavid2992", 1500, 07.24f));

	lesson less("C++");

	group gr("832", less, s);

	universe uni;
	uni.showallstudents();
	s.print();



}
