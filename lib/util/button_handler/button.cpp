#include "button.h"


Button::Button(GPIO_PIN* pin, uint8_t buttonId) : _pin(pin)
{
    _buttonId = buttonId;
   _lastClick = 0;

    Init();

}

Button::Button()
{
    _buttonId = 0;
    _pin = 0;
}

void Button::Init()
{
    _pin->SetupGPIO_InPullUp();
    n_same_state = 0;
    _lastDown = 0;
    _durDown = 0;
    PullUp();
}

void Button::Init(GPIO_PIN* pin, uint8_t buttonId)
{
    _buttonId = buttonId;
    _pin = pin;
    Init();
}


void Button::PullDown()
{
    _pin->PullDown();
    _currentState = false;
    _activeHigh = true;
    _lastReadValue = _currentState;
}

void Button::PullUp()
{
    _pin->PullUp();
    _currentState = true;
    _activeHigh = false;
    _lastReadValue = _currentState;
}


bool Button::IsPinSet()
{
	return _pin->IsSet();
}

bool Button::IsDown()
{
    return (_currentState == _activeHigh);
}


bool Button::IsUp()
{
    return !IsDown();
}

