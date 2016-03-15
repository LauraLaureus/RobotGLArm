//
//  main.c
//  3DPrototype
//
//  Created by Laura del Pino Díaz on 15/3/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//
#include "View.h"

// Espacio para las variables globales de la ventana
float gl_ancho = 2.0, gl_alto= 2.0, gl_cerca=1.0, gl_lejos=10.0; //cambiar según el proyecto
int w_ancho=500, w_alto=500;
int hombro = 0, codo = 0;



int main(int argc, char *argv[]){
    
    glutInit(&argc, argv);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(w_ancho, w_alto);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    
    glutCreateWindow("OpenGL Practica ");
    InitGL();
    glutDisplayFunc(Display); // registra la funcion de rendering
    glutReshapeFunc(ReshapeSize);
    glutSpecialFunc(Teclas);
    
    glutMainLoop(); // bucle principal
    
    return 0;
}
