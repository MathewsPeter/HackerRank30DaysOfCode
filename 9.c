//Day 9: Recursion 3


int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);
    
    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

    int result = factorial(n);
    fprintf(fptr, "%d\n", result);
    fclose(fptr);
    return 0;
}
