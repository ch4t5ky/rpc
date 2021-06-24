struct input {
  string pass<>;
  string command<>;
};

struct output {
  string result<>;
};


program EXECUTE{
  version EXECUTE_VERS {
      output RUN(input)=1;
  } = 1;
} = 10;
