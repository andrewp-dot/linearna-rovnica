

#ifndef LINEARNA_ROVNICA_LINEARNAROVNICA_H
#define LINEARNA_ROVNICA_LINEARNAROVNICA_H


class LinearnaRovnica {
private:
    float koeficientA;
    float koeficientB;
public:
    LinearnaRovnica();
    explicit LinearnaRovnica(float varA, float varB);
    explicit LinearnaRovnica(float koeficient, char nazov);
    void vypisRovnicu() const;
    void vypisKoren()const;



};


#endif //LINEARNA_ROVNICA_LINEARNAROVNICA_H
