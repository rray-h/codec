    #include <iostream>
    #include <string>
    #include <cstring>
    #include <cstdio>

    using namespace std;

    int main(){

        char strUs[999];

        int ch;

        char change;

        int count = 0;
        int countNum = 0;

        cout << "Enter the string: ";

        // do{
        //     ch = getchar();
        //     strUs[count] = ch;
        //     count++;
        // }while(ch != '\n');        
        
        cin >> strUs;

        for (int i = 0; i < strlen(strUs); i++){
            
            count++;
        }

        for (int i = 0;  strUs[i] != '\0'; i++){
            if ( (int)strUs[i] >= 47  && (int)strUs[i] <= 58)
                countNum++;
        }    

        change = strUs[0];
        strUs[0] = strUs[count - 2];
        strUs[count - 2] = change;

        for (int i = 0; i < strlen(strUs); i++){
            
            cout << strUs[i] << " ";
        }
        
        cout << '\n' << countNum << '\n';

        return 0;
    }