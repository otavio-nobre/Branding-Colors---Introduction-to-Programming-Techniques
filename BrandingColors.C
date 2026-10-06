#include <stdio.h>

int hex_to_int(char c) {
    if (c >= '0' && c <= '9') {
        return c - '0';
    }
    return c - 'A' + 10;
}

int main() {
    int n;

    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++) {
        char hex_color[8];
        scanf("%s", hex_color);

        int red = hex_to_int(hex_color[1]) * 16 + hex_to_int(hex_color[2]);
        int green = hex_to_int(hex_color[3]) * 16 + hex_to_int(hex_color[4]);
        int blue = hex_to_int(hex_color[5]) * 16 + hex_to_int(hex_color[6]);

        printf("%s: rgb(%d, %d, %d)\n", hex_color, red, green, blue);
    }

    return 0;
}
