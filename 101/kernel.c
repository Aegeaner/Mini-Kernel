void kmain()
{
    const char *str = "my first kernel";
    char *vidptr = (char*)0xb8000; //video mem begins here.
    unsigned int i=0;
    unsigned int j=0;

    while(j < 80 * 25 * 2) {
        vidptr[j] = ' ';
        vidptr[j+1] = 0x07; // light grey on black screen
        j += 2;
    }
    j = 0;

    while(str[j] != '\0') {
        vidptr[i] = str[j];
        vidptr[i+1] = 0x07;
        j++;
        i += 2;
    }
    return;
}
