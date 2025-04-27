#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "12345";
    char userPassword[6];

    printf("Digite a senha: ");
    scanf("%5s", userPassword);

    if (strcmp(password, userPassword) == 0){
        FILE *file = fopen("text.dat", "rb");
        if (file == NULL) {
            printf("Falha ao abrir o arquivo");
            return 1;
        }

        printf("Arquivo aberto com sucesso!");
        fclose(file);
        return 0;
    } else {
        printf("Senha incorreta");
        return 1;
    }
}