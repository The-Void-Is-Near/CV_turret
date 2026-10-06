//requires motor encoder(s)/hulFX sensor to init at a consistant 0.0; same with yaw but a gyro may also work (not recomended);
#ifndef TARGET_H
#define TARGET_H

#include <iostream>
using namespace std;

class target {
public:
    double yaw;
    double pitch;

    void print();
    void setYaw(double newYaw);
    void setPitch(double newPitch);
    void setDirection(double newYaw, double newPitch);
};

inline void target::print() {
    cout << "Yaw: " << yaw << " Pitch: " << pitch << endl;
}
inline void target::setYaw(double newYaw) {
    yaw = newYaw;
}
inline void target::setPitch(double newPitch) {
    pitch = newPitch;
}
inline void target::setDirection(double newYaw, double newPitch) {
    setYaw(newYaw);
    setPitch(newPitch);
}
#endif // TARGET_H
