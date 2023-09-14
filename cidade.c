    #include <stdio.h>

    int main() {

        int contador, altura, maiora, menora = 1000, am, ah, an;
        float mediam = 0, mediat = 0, porch = 0, nh = 0, nm = 0;
        char sexo;
        
        for (contador = 1; contador <= 3; contador++) {
        printf("qual seu sexo? digite 0 para homem, 1 para mulher, e 2 para nao informar. ");
        scanf(" %c", &sexo);

        printf("e sua altura? em cm! ");
        scanf("%d", &altura);

        switch (sexo) {
            case '0' : nh++; ah += altura;
            break;
            case '1' : nm++; am += altura;
            break;
            case '2' : an += altura;
            break;
            default : printf("invalido. ");
            break;
        }

        if (altura > maiora) {
            maiora = altura;
        } else if (altura < menora) {
            menora = altura;
        }
        }
        mediam = am / nm;
        mediat = (am + ah + an) / 3;
        porch = nh / 3;
        printf("menor altura: %d. maior altura: %d. media das mulheres: %f. media total: %f. porcentagem de homens: %f. ",
        menora, maiora, mediam, mediat, porch);
        return 0;

    }