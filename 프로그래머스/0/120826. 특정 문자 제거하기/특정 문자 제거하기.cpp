#include <string>
#include <vector>
#include <regex>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    answer = regex_replace(my_string, regex(letter), "");
    return answer;
}