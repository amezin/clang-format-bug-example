const int SUPER_LONG_CONSTANT_NAME_1 = 1;
const int SUPER_LONG_CONSTANT_NAME_2 = 2;

int main(void) {
  int my_long_variable_name = 1;

  if (my_long_variable_name != SUPER_LONG_CONSTANT_NAME_1 ||
      my_long_variable_name != SUPER_LONG_CONSTANT_NAME_2) {
    return 1;
  }

  if (my_long_variable_name != SUPER_LONG_CONSTANT_NAME_1) {
    return 2;
  }

  return 0;
}
