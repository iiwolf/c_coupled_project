class CppClass{
public:
    float Value = 0.0f;

    int Function()
    { return ++InternalCounter; }

private:
    int InternalCounter = 0;
};
