void algoritmo(int n)
{
    if (n <= 1)
    {
        return;
    }
    for (int i = 0; i < n; i++)
    {
        println("Executando");
    }
    algoritmo(n / 2);
    algoritmo(n / 2);
}

