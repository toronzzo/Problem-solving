#include <iostream> 
 
using namespace std; 
int main() 
{ 
    string ans; 
    cout << "hello"<<endl; 
    cin >> ans; 
    cout << "What is your name?" << endl; 
    string name; 
    cin >> name; 
    cout << "How are you, " << name << "?"<<endl; 
    cin >> ans; 
    if ((ans == "good") ||(ans ==  "excelent" )||( ans== "not bad")){ 
        cout << "great to hear" << endl;
    } 
    else { 
        cout << "next time you need to say good or excelent or not bad"<< endl; 
    } 
 
        
    cout << "do u want to drink smth?"<<endl; // yes no
    cin >> ans; 
    if (ans == "yes"){
        cout << "what color do u prefer?"<<endl; 
        cout << "we have black, orange, white or just water"<<endl; 
        cin >> ans; // orange black white water
        if (ans == "black") 
            cout << "cola"; 
        else if(ans == "orange")  
            cout << "fanta"; 
        else if(ans == "white") 
                cout << "milk"; 
        else  
            cout << "water";
    }else if(ans == "no"){ 
        cout << "maybe u want some sweets?"<<endl; 
        cin >> ans; 
        if(ans == "yes"){ 
            cout << "what color do u prefer?"<<endl; 
            cin >> ans; 
                if(ans == "red") 
                    cout << "kitkat"; 
                else if(ans == "blue") 
                    cout << "bounty"; 
                else 
                    cout << "barbariski"; 
             
        }else  
            cout << "OK, bye!"; 
    } 
    return 0; 
}