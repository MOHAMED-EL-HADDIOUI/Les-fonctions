#ifndef _Fonction
    #define _Fonction
    #define MU 1.2
    #define F 10
   typedef struct point_t point_t;
   struct point_t {
   	double x,y;
   };
   typedef struct table_t table_t;
   struct table_t {
   	int n;
   	point_t *list;
   	point_t  ptMax,ptMin;
   };
   //list des fonctions scalaires
   double sinusoideAmortie(double);
   double enveloppeSup(double);
   //type pointeur sur fonction scalaire
   typedef double (*fctPtr_t)(double);
   table_t getTable(fctPtr_t,double,double,int);
   void afficherTable(const table_t *);
   void TracerTable(const table_t *[],int);
   
#endif
