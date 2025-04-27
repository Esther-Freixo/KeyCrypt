#include <stdio.h>
#include <string.h>

void showFile(FILE *file);

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