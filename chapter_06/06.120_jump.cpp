#include<iostream>

const int ArSize = 80;

int main(){
    using namespace std;

    char line[ArSize];
    int spaces = 0;

    cout << "Enter a line of text: ";
    cin.get(line, ArSize);
    // cin.getline();
    cout << "Complete line: " << line << endl;
    cout << "Line through first period:\n";

    for (int i=0; line[i] != '\0'; i++){
        cout << line[i];
        if (line[i] == '.')
            break;
        if (line[i] != ' ')
            continue;
        spaces++;
    }

    cout << "\n" << spaces << " spaces\n"
         << "Done.\n";

    return 0;
}