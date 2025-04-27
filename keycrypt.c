#include <stdio.h>
#include <string.h>
#include <openssl/aes.h>

void showFile(FILE *file);

int main() {
    char permanentKey[] = "12345";
    char userKeyInput[6];

    printf("Digite a senha: ");
    scanf("%5s", userKeyInput);

    if (strcmp(permanentKey, userKeyInput) == 0){
        FILE *file = fopen("text.dat", "rb");
        if (file == NULL) {
            printf("Falha ao abrir o arquivo");
            return 1;
        }

        showFile(file);
        fclose(file);
        return 0;
    } else {
        printf("Senha incorreta");
        return 1;
    }
}

void showFile(FILE *file) {
    char buffer[1000];

    while(fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    printf("\n\nArquivo fechado com sucesso!");   
}