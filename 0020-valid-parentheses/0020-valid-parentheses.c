bool isValid(char* s) {
    #include <stdbool.h>


    char stack[10000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {

        // Opening brackets
        if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
            stack[++top] = s[i];
        }

        // Closing brackets
        else {
            if (top == -1)
                return false;

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{')) {
                return false;
            }
        }
    }

    return top == -1;
}
    
