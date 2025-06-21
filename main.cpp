# include "sculptor.h"

int main() {
    Sculptor trono(10, 10, 10);
    trono.setColor(0, 0, 1.0, 1.0);
    trono.putBox(0, 9, 0, 9, 0, 9);
    trono.cutBox(1, 8, 1, 9, 1, 9);
    //trono.writeOFF("trono.off");
    trono.writeOFF("./testeDesenhos/trono.off");

    Sculptor sphere(20, 20, 20);
    sphere.setColor(0, 255, 0, 1.0);
    sphere.putSphere(10, 10, 10, 10);
    sphere.cutSphere(10, 10, 10, 5);
    //sphere.writeOFF("esfera.off");
    sphere.writeOFF("./testeDesenhos/esfera.off");

    Sculptor ellipsoid(20, 20, 20);
    ellipsoid.setColor(128, 0, 128, 1.0);
    ellipsoid.putEllipsoid(10, 10, 10, 6, 4, 3);
    ellipsoid.cutEllipsoid(10, 10, 10, 3, 2, 2);
    //ellipsoid.writeOFF("elipsoide.off");
    ellipsoid.writeOFF("./testeDesenhos/elipsoide.off");

    Sculptor pyramid(10, 10, 10);
    pyramid.setColor(1.0, 0.5, 0, 1.0); // Cor laranja

    // Pirâmide pequena para melhor visualização
    int baseSize = 6;      // Base menor
    int height = 4;        // Altura menor
    int centerX = 5, centerY = 5, zStart = 0;

    for (int h = 0; h < height; h++) {
        int halfSize = (baseSize - h) / 2;
        int x0 = centerX - halfSize;
        int x1 = centerX + halfSize;
        int y0 = centerY - halfSize;
        int y1 = centerY + halfSize;

        pyramid.putBox(x0, x1, y0, y1, zStart + h, zStart + h);
    }

    pyramid.writeOFF("./testeDesenhos/piramide.off");

    return 0;
}
