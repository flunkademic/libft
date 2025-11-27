#include <stdio.h>

void print_binary(unsigned char b)
{
    for (int i = 7; i >= 0; i--)
        printf("%c", (b & (1 << i)) ? '1' : '0');
}

int main(void)
{
    unsigned char bytes[] = {0x00, 0x20, 0x41, 0x7F, 0xAA, 0xFF};
    int n = sizeof(bytes) / sizeof(bytes[0]);

    printf("Byte pattern table:\n");
    printf("Index | Hex  | Dec  | Binary    | Char\n");
    printf("-----------------------------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%5d | 0x%02X | %3d | ", i, bytes[i], bytes[i]);
        print_binary(bytes[i]);
        printf(" | ");

        if (bytes[i] >= 32 && bytes[i] <= 126) // printable ASCII range
            printf("%c", bytes[i]);
        else
            printf("."); // non-printable
        printf("\n");
    }

    return 0;
}
