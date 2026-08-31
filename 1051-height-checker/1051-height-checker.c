
int heightChecker(int* heights, int heightsSize) {
    int expected[100];

    for (int i = 0; i < heightsSize; i++) {
        expected[i] = heights[i];
    }

    for (int i = 0; i < heightsSize; i++) {
        for (int j = i + 1; j < heightsSize; j++) {
            if (expected[i] > expected[j]) {
                int temp = expected[i];
                expected[i] = expected[j];
                expected[j] = temp;
            }
        }
    }

    int count = 0;

    for (int i = 0; i < heightsSize; i++) {
        if (heights[i] != expected[i]) {
            count++;
        }
    }

    return count;
}


