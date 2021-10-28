#include <gtk/gtk.h>
#include "graphiques.h"
#include <math.h>

int
main()
{
    gr_init(800, 400);

    //Exercice 2
    
    for(int i = 0 ; i <= 100 ; i++) {
	gr_draw_point(100, 100+i, 0, 0, 0);
	gr_draw_point(100+i, 100, 255, 0, 0);
	gr_draw_point(100+i, 200+i, 0, 255, 0);
	gr_draw_point(200-i, 100+i, 255, 0, 255);
    }
    /*for(int i = 0 ; i <= 300 ; i++) {
	for(int j = 0 ; j <= 250 ; j++) {
	    gr_draw_point(100+i, 100+j, 255, 0, 255);
	}
    }*/
    
    //Exercice 3
    
    for(int i = 0 ; i <= 800 ; i++) {
	gr_draw_point(i, 200+200*cos(i*2*M_PI/800), 111, 111, 0);
    }

    //Exercice 4
    
    for(double i = 0 ; i <= 2*M_PI ; i+=1.0/100) {
	gr_draw_point(400+100*cos(i), 200+100*sin(i), 7, 111, 222);
    }

    //Exercice 5
    
    for(int i = 0 ; i < 256 ; i++) {
	gr_draw_point(200+i, 100, i, 0, 255-i);
    }

    for(int i = 0 ; i < 256 ; i++) {
	for(int j = 0 ; j < 256 ; j++) {
	    gr_draw_point(800-260+i, 400-260+j, i, j, 0);
	}
    }


    
    gr_display();
    return 0;
}
