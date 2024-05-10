#include <stdio.h>
#include <string.h>

int baralho[4][13];

void checkCard(char temp[]) {
    int val = (temp[0] - '0') * 10 + (temp[1] - '0');

    switch(temp[2]) {
        case 'C':
            baralho[0][val-1]+= 1;
            break;
        case 'E':
            baralho[1][val-1] = baralho[1][val-1] + 1;
            break;
        case 'U':
            baralho[2][val-1] = baralho[2][val-1] + 1;
            break;   
        case 'P':
            baralho[3][val-1] = baralho[3][val-1] + 1;
            break; 
        default:
            break;      
    }
}

int main() {
    char input[160], temp[4];

    scanf("%s", &input);
    
    for(int i = 0; i < strlen(input)/3; i++) {
        temp[0] = input[3*i];
        temp[1] = input[3*(i)+1];
        temp[2] = input[3*(i)+2];
        temp[3] = '\0';

        checkCard(temp);

        temp[0] = '\0';
    }
    
    for(int i = 0; i < 4; i++) {
        int falt = 0;
        for(int j = 0; j < 13; j++) {
            if(baralho[i][j] == 0) {
                falt++;
            }
            else if(baralho[i][j] == 2) {
                falt = 1000;
                printf("erro\n");
                break;
            }
        }
        if(falt != 1000)
            printf("%d\n", falt);
    }

    return 0;
}