#ifndef EASING_H
#define EASING_H

namespace ease {

//constrains input range
float clamp(float x);

// Sine easing functions
float outSine(float x);
float inSine(float x);
float inOutSine(float x);

// Quad easing functions
float outQuad(float x);
float inQuad(float x);
float inOutQuad(float x);

// Cubic easing functions
float outCubic(float x);
float inCubic(float x);
float inOutCubic(float x);

// Quart easing functions
float outQuart(float x);
float inQuart(float x);
float inOutQuart(float x);

// Expo easing functions
float outExpo(float x);
float inExpo(float x);
float inOutExpo(float x);

// Quint easing functions
float outQuint(float x);
float inQuint(float x);
float inOutQuint(float x);

// Circ easing functions
float outCirc(float x);
float inCirc(float x);
float inOutCirc(float x);

// Elastic easing functions
float outElastic(float x);
float inElastic(float x);
float inOutElastic(float x);

// Back easing functions
float outBack(float x);
float inBack(float x);
float inOutBack(float x);

// Bounce easing functions
float outBounce(float x);
float inBounce(float x);
float inOutBounce(float x);

} // namespace ease

#endif // EASING_H
