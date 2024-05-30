#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string name = "abcdefghij";
    int a;
    while(age>0){
        a += age%10;
       // answer.push_front(name[age%10]);
        answer.insert(answer.begin(), name[age%10]); // 맨앞에 원소 삽입
        age /= 10;
        
    }
    return answer;
}