#ifndef GUARD_E4BC9A17_B7BA_4CC5_A46E_778B5153CB75
#define GUARD_E4BC9A17_B7BA_4CC5_A46E_778B5153CB75

namespace drivers::light
{
class led
{
public:
    led(bool state = false);

    void toggle();
    bool state() const;

private:
    bool state_;
};
}

#endif

