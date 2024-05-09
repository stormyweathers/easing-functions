#include <cmath>

namespace ease {

// Helper function to clamp input to the range [0, 1]
float clamp(float x) {
    return x < 0 ? 0 : x > 1 ? 1 : x;
}

// Sine easing functions
float outSine(float x) {
    x = clamp(x);
    return std::sin((x * M_PI) / 2);
}

float inSine(float x) {
    return 1 - outSine(1 - x);
}

float inOutSine(float x) {
    return x < 0.5 ? (1 - outSine(1 - 2 * x)) / 2 : (1 + outSine(2 * x - 1)) / 2;
}

// Quad easing functions
float outQuad(float x) {
    x = clamp(x);
    return 1 - (1 - x) * (1 - x);
}

float inQuad(float x) {
    return 1 - outQuad(1 - x);
}

float inOutQuad(float x) {
    return x < 0.5 ? (1 - outQuad(1 - 2 * x)) / 2 : (1 + outQuad(2 * x - 1)) / 2;
}

// Cubic easing functions
float outCubic(float x) {
    x = clamp(x);
    return 1 - std::pow(1 - x, 3);
}

float inCubic(float x) {
    return 1 - outCubic(1 - x);
}

float inOutCubic(float x) {
    return x < 0.5 ? (1 - outCubic(1 - 2 * x)) / 2 : (1 + outCubic(2 * x - 1)) / 2;
}

// Quart easing functions
float outQuart(float x) {
    x = clamp(x);
    return 1 - std::pow(1 - x, 4);
}

float inQuart(float x) {
    return 1 - outQuart(1 - x);
}

float inOutQuart(float x) {
    return x < 0.5 ? (1 - outQuart(1 - 2 * x)) / 2 : (1 + outQuart(2 * x - 1)) / 2;
}

// Expo easing functions
float outExpo(float x) {
    x = clamp(x);
    return x == 1 ? 1 : ( 1- std::pow(2, -10 * x) );
}

float inExpo(float x) {
    return 1 - outExpo(1 - x);
}

float inOutExpo(float x) {
    return x == 0 ? 0 : x == 1 ? 1 : x < 0.5 ? (1 - outExpo(1 - 2 * x)) / 2 : (1 + outExpo(2 * x - 1)) / 2;
}

// Quint easing functions
float outQuint(float x) {
    x = clamp(x);
    return 1 - std::pow(1 - x, 5);
}

float inQuint(float x) {
    return 1 - outQuint(1 - x);
}

float inOutQuint(float x) {
    return x < 0.5 ? (1 - outQuint(1 - 2 * x)) / 2 : (1 + outQuint(2 * x - 1)) / 2;
}

// Circ easing functions
float outCirc(float x) {
    x = clamp(x);
    return std::sqrt(1 - std::pow(x - 1, 2));
}

float inCirc(float x) {
    return 1 - outCirc(1 - x);
}

float inOutCirc(float x) {
    return x < 0.5 ? (1 - outCirc(1 - 2 * x)) / 2 : (1 + outCirc(2 * x - 1)) / 2;
}

// Elastic easing functions
float outElastic(float x) {
    const float c4 = (2 * M_PI) / 3;
    x = clamp(x);
    return x == 0 ? 0 : x == 1 ? 1 : std::pow(2, -10 * x) * std::sin((x * 10 - 0.75) * c4) + 1;
}

float inElastic(float x) {
    return 1 - outElastic(1 - x);
}

float inOutElastic(float x) {
    const float c5 = (2 * M_PI) / 4.5;
    x = clamp(x);
    return x == 0 ? 0 : x == 1 ? 1 : x < 0.5 ? (1 - outElastic(1 - 2 * x)) / 2 : (1 + outElastic(2 * x - 1)) / 2;
}

// Back easing functions
float outBack(float x) {
    const float c1 = 1.70158;
    const float c3 = c1 + 1;
    x = clamp(x);
    return 1 + c3 * std::pow(x - 1, 3) + c1 * std::pow(x - 1, 2);
}

float inBack(float x) {
    return 1 - outBack(1 - x);
}

float inOutBack(float x) {
    const float c2 = 1.70158 * 1.525;
    x = clamp(x);
    return x < 0.5 ? (1 - outBack(1 - 2 * x)) / 2 : (1 + outBack(2 * x - 1)) / 2;
}

// Bounce easing functions
float outBounce(float x) {
    const float n1 = 7.5625;
    const float d1 = 2.75;
    x = clamp(x);
    if (x < 1 / d1) {
        return n1 * x * x;
    } else if (x < 2 / d1) {
        return n1 * (x -= 1.5 / d1) * x + 0.75;
    } else if (x < 2.5 / d1) {
        return n1 * (x -= 2.25 / d1) * x + 0.9375;
    } else {
        return n1 * (x -= 2.625 / d1) * x + 0.984375;
    }
}

float inBounce(float x) {
    return 1 - outBounce(1 - x);
}

float inOutBounce(float x) {
    x = clamp(x);
    return x < 0.5 ? (1 - outBounce(1 - 2 * x)) / 2 : (1 + outBounce(2 * x - 1)) / 2;
}

} // namespace ease
