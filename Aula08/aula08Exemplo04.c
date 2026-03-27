#include <stdio.h>

    int aprovado(int totalAulas, int faltas, double *nota, double recuperacao)
    {
        double limiteFaltas = totalAulas * 0.25;

        // se recuperação for maior, substitui a nota
        if (recuperacao > *nota)
        {
            *nota = recuperacao;
        }

        if (faltas <= limiteFaltas && *nota >= 6.0)
            return 1;
        else
            return 0;
    }

    int aprovado2(int totalAulas, int faltas, double nota)
    {
        //printf("Resultado = %d\n", (faltas <= totalAulas * 0.25 && nota >= 6)) ;
        
        return (faltas <= totalAulas * 0.25 && nota >= 6);
    }
    
    int main()
    {
        int total = 80;
        int faltas = 10;
        double nota = 4.5;
        if (aprovado(total, faltas, &nota, 5.5)) 
            printf("Aluno aprovado\n");
        else
            printf("Aluno reprovado\n");
        printf("Nota final = %.2lf\n", nota);
        return 0;
    }