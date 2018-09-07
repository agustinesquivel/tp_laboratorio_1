float sumar (float numeroUno, float numeroDos)
{
   float suma=0;
    suma= numeroUno+numeroDos;
    return suma;
}
float calcularResta(float numeroUno, float numeroDos)
{
   float resta=0;
    resta= numeroUno-numeroDos;
    return resta;
}
float calcularDivision (float numeroUno, float numeroDos)
{
   float division=0;
    division= numeroUno/numeroDos;
    return division;
}

float calcularMultiplicacion (float numeroUno, float numeroDos)
{
   float multiplicar=0;
    multiplicar= numeroUno+numeroDos;
    return multiplicar;
}

int calcularFactorealNro1(int numeroUno)
{
    int factoreal1=1;
    for (int i=numeroUno; i>=1;i--)
        {
        factoreal1=factoreal1*i;

    }
    return factoreal1;
}
int calcularFactorealNro2(int numeroDos)
{
int factoreal2=1;
   for (int i=numeroDos; i>=1; i--){
    factoreal2=factoreal2*i;
   }
    return factoreal2;
}
