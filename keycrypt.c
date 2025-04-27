#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "12345";
    char userPassword[6];

    printf("Digite a senha: ");
    scanf("%5s", userPassword);

    if (strcmp(password, userPassword) == 0){
        printf("Senha confirmada");
        return 0;
    } else {
        printf("Senha incorreta");
        return 1;
    }
    return 0;
}