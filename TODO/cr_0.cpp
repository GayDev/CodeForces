#include <bits/stdc++.h>

using namespace std;

void print_field(vector<vector<char>> field) {
    int size_x = field[0].size();
    int size_y = field.size();
    cout << string(8, ' ');
    for (int i = 0; i < size_x; i++) {
        if (i%10 == 0)
            cout << i/10;
        else
            cout << " ";
        
        cout << "   ";
    }
    cout << "\n";
    cout << string(8, ' ');
    for (int i = 0; i < size_x; i++)
        cout << i%10 << "   ";
    cout << "\n";
    cout << string(8, ' ');
    for (int i = 0; i < size_x; i++)
        cout << "." << "   ";
    cout << "\n";

    cout << string(6, ' ') << string(4*size_x + 1, '-') << "\n";
    for (int i = 0; i < size_y; i++) {
        if (i%10 == 0)
            cout << i/10;
        else
            cout << " ";
        cout << " " << i%10 << " - ";
        
        cout << "| ";
        for (int j = 0; j < size_x; j++)
            cout << field[i][j] << " | ";
        cout << "\n" << string(6, ' ') << string(4*size_x + 1, '-') << "\n";
    }
}

int main() {
	
    vector<vector<char>> field;
    int size_x, size_y;
    cout << "Size_x: ";
    cin >> size_x;
    cout << "Size_y: ";
    cin >> size_y;
    system("clear");

    vector<char> t(size_x, ' ');
    for (int i = 0; i < size_y; i++)
        field.push_back(t);

    bool win = 0;
    bool turn = 0;

    print_field(field);
    
    return 0;
}