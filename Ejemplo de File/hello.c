//Codigo que crea archivo
// int main()
{    
    FILE *opening;
    opening = fopen("output.txt","w");
    fprintf(opening,"Hello world!");     
    fclose(opening);
    printf("Writing to the file was successful.\n");
    printf("Closing the program");
    return 0;
}