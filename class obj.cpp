#include<iostream>
using namespace std;

class Student
{
	int n;
	int scores[5];
	public:
		void input();
		int calculateTotalScore();
};

void Student::input()
{
		for(int j=0;j<5;j++)
		cin>>scores[j];
		cout<<"\n";
}

int Student::calculateTotalScore()
{   int total1=0;                              
	for(int j=0;j<5;j++)
		total1=total1+scores[j];
		return total1;
		
}

int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}

