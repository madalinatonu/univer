 //Să se scrie un program în C care citește de la tastatură un număr întreg şi afișează daca acesta este număr prim sau nu.

 #include<stdio.h>

 int  main()
{
    int n, divizor = 2, gasit = 0;

    printf("\nScrieti un numar: ");
    scanf("%d", &n);

    do {
        
        if (n % divizor == 0)
            gasit=1;   

    } while(divizor < n/2 && !gasit);

    if(gasit)
    {
        printf("\nNumarul nu este prim");
    }
    else 
        printf("\nNumarul este prim");

    return 0;
}