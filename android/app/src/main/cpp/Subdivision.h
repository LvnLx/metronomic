#ifndef ANDROID_SUBDIVISION_H
#define ANDROID_SUBDIVISION_H


class Subdivision {
public:
    Subdivision(int32_t option, float volume);
    virtual ~Subdivision() = default;

    int32_t option;
    float volume;

    std::vector<float> getLocations() const;

private:
    uint8_t locationPrecision = 2;
};


#endif //ANDROID_SUBDIVISION_H