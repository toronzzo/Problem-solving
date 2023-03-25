#include <iostream>
#include <string>

using namespace std;

string number_to_word(int number) {
    string words[] = {
        "zero", "jeden", "dwa", "trzy", "cztery",
        "pięć", "sześć", "siedem", "osiem", "dziewięć"
    };
    return words[number];
}

string convert_time_to_words(int hour, int minute) {
    string hour_word = number_to_word(hour);
    string minute_word = number_to_word(minute);
    string result = "Jest " + hour_word;
    if (minute == 0) {
        result += ".";
    } else if (minute == 1) {
        result += " i " + minute_word + " minuta.";
    } else {
        result += " i " + minute_word + " minut.";
    }
    return result;
}

int main() {
    int hour, minute;
    char delimiter;
    cout << "Enter time (HH:MM): ";
    cin >> hour >> delimiter >> minute;
    cout << convert_time_to_words(hour, minute) << endl;
    return 0;
}
