#include <stdio.h>
#include <gtk/gtk.h>
#include <math.h>
#define PI 3.14

double* linspace(double x1, double x2, int n) {
 double *x = calloc(n, sizeof(double));
 double step = (x2 - x1) / (double)(n - 1);
 for (int i = 0; i < n; i++) {
     x[i] = x1 + ((double)i * step);
 }
 return x;
}

int do_sinusoidal() {
    float freq = 0.2 * PI;
    float angular = 2*PI*freq;
    float amplitude = 1.25;
    float t = linspace(0,PI,10000);
    float ft = angular * sin(angular * t);
    return ft;
}
int main(int argc, char*argv[]) {
    GtkWidget *window;
    gtk_init(&argc, &argv);
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_widget_show(window);
    gtk_main();
    return 0;
}
