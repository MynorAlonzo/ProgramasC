/*LIBRERIAS*/
            #include <stdio.h>
            #include <stdlib.h>
/*CONSTANTES*/
            #define p printf
            #define s scanf
            #define f fprintf
/*FUNCIONES SIN PASO DE PARAMETROS*/
            void defin(){
    p("\n\t\t\tEste es un programa que sirve para llevar un mejor control de tareas, evaluaciones");
    p("\n\t      y notas finales de los cursos asignados por cada seccion de 4to grado por cada alumno registrado.\n");
    p("------------------------------------------------------------------------------------------------------------------------\n");
    p("\t1.\tHorario\n\n\n\t2.\tCursos\n\n\n\t3.\tProfesores\n\n\n\t");
    p("4.\tAlumnos\n\n\n\t0.\tsalir\n\n");
    p("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t\t\t\t\tseleccione una opcion >>\t");
}
            void margen(){
    p("------------------------------------------------------------------------------------------------------------------------");
    p("(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)(::)");
    p("------------------------------------------------------------------------------------------------------------------------");
}
/*FUNCION DENTRO DE OTRA FUNCION*/
            void emcabezado(){
   margen();
    p("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    p("    COLEGIO TECNICO VOCACIONAL     ");
    p("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx");
    p("------------------------------------------------------------------------------------------------------------------------");
    p("------------------------------------------------------------------------------------------------------------------------\n");
}
/*ESTRUCTURAS*/
            typedef struct agenda{
    char nombre[40];
    char seccion;
    int grado;
    int clave;
    }alumno;
            struct resulados_cursos{
            int notacurso[10][10];
            };
    int main(){
                    int prom=0,menu=0,opc=0;    char nombre[10];        FILE *archivo;
                    struct agenda alumno;       alumno.grado=0;         alumno.seccion='a';
/*DO-WHILE*/
            do{     emcabezado();               defin();                system("color 04");
                    s("%d",&opc);
                    system("cls");              margen();
/*SELECTIVA MULTIPLE (SWITCH-CASE)*/
            switch(opc){
            case 0: lector(opc); break;
            case 1:
        p("\t\t\t\t\t\t*** HORARIO DE CLASES ***\n");
        p("\n\t\t\tConsiderando que el colegio cuenta con un grupo de profesores por seccion.");
        p("\n\t\t\t\tEl horario es el mismo para las 3 secciones.\n");
        p("-------------------------------------------------------------");
        p("-----------------------------------------------------------\n");
        lector(opc); break;
    case 2:
        p("\t\t\t\t\t*** CURSOS Y PONDERACIONES ***\n");
        p("\n\t\tSe ha considerado realizar 3 examenes parciales y un examen final (no retrasadas).");
        p("\n\t\t\tA continuacion se le presenta la ponderacion por curso.\n");
        p("-------------------------------------------------------------");
        p("-----------------------------------------------------------\n");
        lector(opc); break;
    case 3:
        p("\t\t\t\t*** LISTADO DE PROFESORES DE 4TO GRADO ***\n");
        p("\n\t\t\tEl colegio cuenta con un profesor por cada curso y seccion.\n");
        p("-------------------------------------------------------------");
        p("-----------------------------------------------------------\n");
        lector(opc); break;
    case 4:
    do{
    p("\t\t\t\t\t\t**ALUMNOS**\n\n");
    p("------------------------------------------------------------------------------------------------------------------------\n\n");
    p("\n\n\t1>\tregistrar alumno\n");
    p("\n\n\t2>\tlistado de alumnos\n\n\n");
    p("\t3>\tnotas\n\n\n");
    p("\t0>\tregresar al menu anterior\n\n\n\n\n\n\n");
    p("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t\t\t\t\tseleccione una opcion >>\t");
    s("%d",&menu);
      system("cls");    margen();
      /*PENDIENTE MENSAJE Y AUTOLLAMADA*/
    if(menu==1){
    p("\t\t\t\t\t\t**REGISTRO DE ALUMNOS**\n\n");
    p("------------------------------------------------------------------------------------------------------------------------\n\n");

    p("\n\t\tNOMBRE:\t\t");
    s("%s",&alumno.nombre);
    p("\t\tGRADO(4to):\t");
    s("%d",&alumno.grado);
    if(alumno.grado==4){
    p("\t\tSECCION:\t");
    s("%s",&alumno.seccion);
    int abc=0;

    if(alumno.seccion=='a' || alumno.seccion=='A')
    abc=1;
if(alumno.seccion=='b' || alumno.seccion=='B')
    abc=2;
if(alumno.seccion=='c' || alumno.seccion=='C')
    abc=3;
alumno.clave=contarabc(abc);
    if(alumno.clave<=10){
    p("\t\tCLAVE:\t%d",alumno.clave);

    if(alumno.seccion=='A' || alumno.seccion=='a'){
    archivo=fopen("4to A.txt","at");
    f(archivo,"\n%s",&alumno.nombre);
    fclose(archivo);
    }
    if(alumno.seccion=='B' || alumno.seccion=='b'){
    archivo=fopen("4to B.txt","at");
    f(archivo,"\n%s",&alumno.nombre);
    fclose(archivo);
    }
    if(alumno.seccion=='C' || alumno.seccion=='c'){
    archivo=fopen("4to C.txt","at");
    f(archivo,"\n%s",&alumno.nombre);
    fclose(archivo);
    }
p("\n\nalumno registrado exitosamente!!!\n\n\n\n\n\n\n");
   p("\n\n\n\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t oprima la tecla Enter para retornar al menu anterior >>\t");
}
if(alumno.clave>10){
        p("\n\n\n\t\t\t\tCUPO LIMITADO!!! \n\n\t\t\t\tLISTADO COMPLETADO\n\n\n\n");
        p("\n\n\n\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t oprima la tecla Enter para retornar al menu anterior >>\t");}}
    if(alumno.grado!=4){
    p("\t\n\n\nLOS ALUMNOS DE PRIMER INGRESO DEBEN REGISTRARSE EN 4TO GRADO!!!\n\t\t");}
    getch();
        }

     /*PENDIENTE MENSAJE Y AUTOLLAMADA RECURCIVIDAD*/
    if(menu==2){
    p("\t\t\t\t\t**LISTADOS DE ALUMNOS DE 4TO GRADO (A,B,C)**\n\n");
    p("------------------------------------------------------------------------------------------------------------------------\n\n");
    p("Grado:\t\t");
    s("%d",&alumno.grado);
    if(alumno.grado==4){
    p("Seccion:\t");
    s("%s",&alumno.seccion);
    if(alumno.seccion!='A'&&alumno.seccion!='a'&&alumno.seccion!='B'&&alumno.seccion!='b'&&alumno.seccion!='C'&&alumno.seccion!='c'){
    p("\n\n\n\t\tLO SENTIMOS SOLO CONTAMOS CON LAS SECCIONES A, B Y C!!!\t\n");
    }
  else { p("\n\nclave\t|\tnombre\n");
    p("---------------------------\n");}
    if(alumno.seccion=='A' || alumno.seccion=='a'){
            int leerlist=14;
    lector(leerlist);
    }
    if(alumno.seccion=='B' || alumno.seccion=='b'){
            int leerb=13;
    lector(leerb);
    }
    if(alumno.seccion=='C' || alumno.seccion=='c'){
            int leerc=12;
    lector(leerc);
    }}
    if(alumno.grado!=4)
    p("\n\n\n\n\t\tNO HAY LISTADOS REGISTRADOS DEL GRADO DESEADO!!!");
    getch();
    }
    else if(menu==3){
    int lcd=0,jpg,curso;
    do{system("cls"); margen();
    p("\t\t\t\t\t\t\t**NOTAS**\n\n");
    p("------------------------------------------------------------------------------------------------------------------------\n\n");
    p("\n\n\n\t1>\tingresar nota por curso\n\n\n\t2>\tver notas por curso\n\n\n\t0>\tregresar al menu anterior\n\n\n\n");
    p("\n\n\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t\t\t\t\tseleccione una opcion >>\t");
    s("%d",&jpg);
    if(jpg==1){system("cls"); margen();
    p("\t\t\t\t\t\t\t**CURSOS**\n\n");
    p("------------------------------------------------------------------------------------------------------------------------\n\n");
    p("\t1>\tMatematicas\t\t\t2>\tIdioma\n\n\n\t3>\tComputacion\t\t\t4>\tArtes Plasticas\n\n\n\t5>\tArtes Industriales");
    p("\t\t6>\tCiencias\n\n\n\t7>\tSociales\t\t\t8>\tMusica\n\n\n\t9>\tIngles\t\t\t\t0>\tregresar al menu anterior\n\n\n\n");
    p("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t\t\t\t\tseleccione una opcion >>\t");
    s("%d",&curso);
    if(curso!=0)
    do{
           system("cls"); margen();
    p("\t\t\t\t\t\t**INGRESO DE NOTAS**\n\n");
    p("------------------------------------------------------------------------------------------------------------------------\n\n");
    p("\n\n\n\t1>\tingresar nota de tareas\n\n\n\t2>\tingresar nota de examenes\n\n\n\t3>\tver notas\n\n\n\t0>\tregresar al menu anterior\n");
    p("\n\n\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t\t\t\t\tseleccione una opcion >>\t");
    s("%d",&lcd);
    if(lcd!=0){
        system("cls");
        margen();}
    if(lcd==1){
    escritor(curso,lcd);
    }
    if(lcd==2){
            escritor(curso,lcd);


    }
    if(lcd==3){
    reporte(curso,lcd);
    }
    }while(lcd!=0);
    }
    if(jpg==2){
            reporte(1,4);

    }
    }while(jpg!=0);
    }
   system("cls");
   margen();
   }while(menu!=0);
    break;
    }
    getchar();    system("cls");
    }while(opc!=0);
    return 0;}

    int escritor(int cur,int tare_exa){
    int grad=4;
    char sec[2]={'a','b','c'};
    int j=0;

        system("cls"); margen();
    p("\t\t\t\t\t\t**DATOS DEL ALUMNO**\n\n");
    p("------------------------------------------------------------------------------------------------------------------------\n\n");
    p("\n\n\n\t1>\tGRADO:\t4\n\n\n\t2>\tSECCION:\t");

    s("%s",&sec[0]);

    FILE * notast;
    int tareas[10][4];
    int a=0;
    int acumulador=0,e=0;
    char *uno,*dos,*tres,*cuatro;

if(tare_exa==1 && sec[0]=='a'||sec[0]=='A'){
   if(cur==1)
            notast=fopen("tareas_mate_A.txt","rt");
    if(cur==2)
            notast=fopen("tareas_idi_A.txt","rt");
    if(cur==3)
            notast=fopen("tareas_compu_A.txt","rt");
    if(cur==4)
            notast=fopen("tareas_artp_A.txt","rt");
    if(cur==5)
            notast=fopen("tareas_arti_A.txt","rt");
    if(cur==6)
            notast=fopen("tareas_ciencias_A.txt","rt");
    if(cur==7)
            notast=fopen("tareas_sociales_A.txt","rt");
    if(cur==8)
            notast=fopen("tareas_musica_A.txt","rt");
    if(cur==9)
            notast=fopen("tareas_ingles_A.txt","rt");}

if(tare_exa==1 && sec[0]=='b'||sec[0]=='B'){
   if(cur==1)
            notast=fopen("tareas_mate_B.txt","rt");
    if(cur==2)
            notast=fopen("tareas_idi_B.txt","rt");
    if(cur==3)
            notast=fopen("tareas_compu_B.txt","rt");
    if(cur==4)
            notast=fopen("tareas_artp_B.txt","rt");
    if(cur==5)
            notast=fopen("tareas_arti_B.txt","rt");
    if(cur==6)
            notast=fopen("tareas_ciencias_B.txt","rt");
    if(cur==7)
            notast=fopen("tareas_sociales_B.txt","rt");
    if(cur==8)
            notast=fopen("tareas_musica_B.txt","rt");
    if(cur==9)
            notast=fopen("tareas_ingles_B.txt","rt");}

if(tare_exa==1 && sec[0]=='c'||sec[0]=='C'){
   if(cur==1)
            notast=fopen("tareas_mate_C.txt","rt");
    if(cur==2)
            notast=fopen("tareas_idi_C.txt","rt");
    if(cur==3)
            notast=fopen("tareas_compu_C.txt","rt");
    if(cur==4)
            notast=fopen("tareas_artp_C.txt","rt");
    if(cur==5)
            notast=fopen("tareas_arti_C.txt","rt");
    if(cur==6)
            notast=fopen("tareas_ciencias_C.txt","rt");
    if(cur==7)
            notast=fopen("tareas_sociales_C.txt","rt");
    if(cur==8)
            notast=fopen("tareas_musica_C.txt","rt");
    if(cur==9)
            notast=fopen("tareas_ingles_C.txt","rt");}


if(tare_exa==2 && sec[0]=='a'||sec[0]=='A'){
   if(cur==1)
            notast=fopen("examenes_mate_A.txt","rt");
    if(cur==2)
            notast=fopen("examenes_idi_A.txt","rt");
    if(cur==3)
            notast=fopen("examenes_compu_A.txt","rt");
    if(cur==4)
            notast=fopen("examenes_artp_A.txt","rt");
    if(cur==5)
            notast=fopen("examenes_arti_A.txt","rt");
    if(cur==6)
            notast=fopen("examenes_ciencias_A.txt","rt");
    if(cur==7)
            notast=fopen("examenes_sociales_A.txt","rt");
    if(cur==8)
            notast=fopen("examenes_musica_A.txt","rt");
    if(cur==9)
            notast=fopen("examenes_ingles_A.txt","rt");}

if(tare_exa==2 && sec[0]=='b'||sec[0]=='B'){
   if(cur==1)
            notast=fopen("examenes_mate_B.txt","rt");
    if(cur==2)
            notast=fopen("examenes_idi_B.txt","rt");
    if(cur==3)
            notast=fopen("examenes_compu_B.txt","rt");
    if(cur==4)
            notast=fopen("examenes_artp_B.txt","rt");
    if(cur==5)
            notast=fopen("examenes_arti_B.txt","rt");
    if(cur==6)
            notast=fopen("examenes_ciencias_B.txt","rt");
    if(cur==7)
            notast=fopen("examenes_sociales_B.txt","rt");
    if(cur==8)
            notast=fopen("examenes_musica_B.txt","rt");
    if(cur==9)
            notast=fopen("examenes_ingles_B.txt","rt");}

if(tare_exa==2 && sec[0]=='c'||sec[0]=='C'){
   if(cur==1)
            notast=fopen("examenes_mate_C.txt","rt");
    if(cur==2)
            notast=fopen("examenes_idi_C.txt","rt");
    if(cur==3)
            notast=fopen("examenes_compu_C.txt","rt");
    if(cur==4)
            notast=fopen("examenes_artp_C.txt","rt");
    if(cur==5)
            notast=fopen("examenes_arti_C.txt","rt");
    if(cur==6)
            notast=fopen("examenes_ciencias_C.txt","rt");
    if(cur==7)
            notast=fopen("examenes_sociales_C.txt","rt");
    if(cur==8)
            notast=fopen("examenes_musica_C.txt","rt");
    if(cur==9)
            notast=fopen("examenes_ingles_C.txt","rt");}

    p("\n\n\n\t3>\tCLAVE:\t");
    s("%d",&j);
    p("\n\n\n\n\n\n\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    j=j-1;
    system("cls");
    for(int e=0; e<10;e++){
    fscanf(notast,"%s%s%s%s",&uno,&dos,&tres,&cuatro);
    tareas[e][0]=atoi(&uno);
    tareas[e][1]=atoi(&dos);
    tareas[e][2]=atoi(&tres);
    tareas[e][3]=atoi(&cuatro);}
    fclose(notast);
if(tare_exa==1 && sec[0]=='a'||sec[0]=='A'){
   if(cur==1)
            notast=fopen("tareas_mate_A.txt","wt");
    if(cur==2)
            notast=fopen("tareas_idi_A.txt","wt");
    if(cur==3)
            notast=fopen("tareas_compu_A.txt","wt");
    if(cur==4)
            notast=fopen("tareas_artp_A.txt","wt");
    if(cur==5)
            notast=fopen("tareas_arti_A.txt","wt");
    if(cur==6)
            notast=fopen("tareas_ciencias_A.txt","wt");
    if(cur==7)
            notast=fopen("tareas_sociales_A.txt","wt");
    if(cur==8)
            notast=fopen("tareas_musica_A.txt","wt");
    if(cur==9)
            notast=fopen("tareas_ingles_A.txt","wt");}

if(tare_exa==1 && sec[0]=='b'||sec[0]=='B'){
   if(cur==1)
            notast=fopen("tareas_mate_B.txt","wt");
    if(cur==2)
            notast=fopen("tareas_idi_B.txt","wt");
    if(cur==3)
            notast=fopen("tareas_compu_B.txt","wt");
    if(cur==4)
            notast=fopen("tareas_artp_B.txt","wt");
    if(cur==5)
            notast=fopen("tareas_arti_B.txt","wt");
    if(cur==6)
            notast=fopen("tareas_ciencias_B.txt","wt");
    if(cur==7)
            notast=fopen("tareas_sociales_B.txt","wt");
    if(cur==8)
            notast=fopen("tareas_musica_B.txt","wt");
    if(cur==9)
            notast=fopen("tareas_ingles_B.txt","wt");}

if(tare_exa==1 && sec[0]=='c'||sec[0]=='C'){
   if(cur==1)
            notast=fopen("tareas_mate_C.txt","wt");
    if(cur==2)
            notast=fopen("tareas_idi_C.txt","wt");
    if(cur==3)
            notast=fopen("tareas_compu_C.txt","wt");
    if(cur==4)
            notast=fopen("tareas_artp_C.txt","wt");
    if(cur==5)
            notast=fopen("tareas_arti_C.txt","wt");
    if(cur==6)
            notast=fopen("tareas_ciencias_C.txt","wt");
    if(cur==7)
            notast=fopen("tareas_sociales_C.txt","wt");
    if(cur==8)
            notast=fopen("tareas_musica_C.txt","wt");
    if(cur==9)
            notast=fopen("tareas_ingles_C.txt","wt");}

if(tare_exa==2 && sec[0]=='a'||sec[0]=='A'){
   if(cur==1)
            notast=fopen("examenes_mate_A.txt","wt");
    if(cur==2)
            notast=fopen("examenes_idi_A.txt","wt");
    if(cur==3)
            notast=fopen("examenes_compu_A.txt","wt");
    if(cur==4)
            notast=fopen("examenes_artp_A.txt","wt");
    if(cur==5)
            notast=fopen("examenes_arti_A.txt","wt");
    if(cur==6)
            notast=fopen("examenes_ciencias_A.txt","wt");
    if(cur==7)
            notast=fopen("examenes_sociales_A.txt","wt");
    if(cur==8)
            notast=fopen("examenes_musica_A.txt","wt");
    if(cur==9)
            notast=fopen("examenes_ingles_A.txt","wt");}

if(tare_exa==2 && sec[0]=='b'||sec[0]=='B'){
   if(cur==1)
            notast=fopen("examenes_mate_B.txt","wt");
    if(cur==2)
            notast=fopen("examenes_idi_B.txt","wt");
    if(cur==3)
            notast=fopen("examenes_compu_B.txt","wt");
    if(cur==4)
            notast=fopen("examenes_artp_B.txt","wt");
    if(cur==5)
            notast=fopen("examenes_arti_B.txt","wt");
    if(cur==6)
            notast=fopen("examenes_ciencias_B.txt","wt");
    if(cur==7)
            notast=fopen("examenes_sociales_B.txt","wt");
    if(cur==8)
            notast=fopen("examenes_musica_B.txt","wt");
    if(cur==9)
            notast=fopen("examenes_ingles_B.txt","wt");}

if(tare_exa==2 && sec[0]=='c'||sec[0]=='C'){
   if(cur==1)
            notast=fopen("examenes_mate_C.txt","wt");
    if(cur==2)
            notast=fopen("examenes_idi_C.txt","wt");
    if(cur==3)
            notast=fopen("examenes_compu_C.txt","wt");
    if(cur==4)
            notast=fopen("examenes_artp_C.txt","wt");
    if(cur==5)
            notast=fopen("examenes_arti_C.txt","wt");
    if(cur==6)
            notast=fopen("examenes_ciencias_C.txt","wt");
    if(cur==7)
            notast=fopen("examenes_sociales_C.txt","wt");
    if(cur==8)
            notast=fopen("examenes_musica_C.txt","wt");
    if(cur==9)
            notast=fopen("examenes_ingles_C.txt","wt");}

 do{  margen();
        if(tare_exa==1)
        p("\t\t\t\t\t\t**TAREAS**\n\n\n");
        if(tare_exa==2)
        p("\t\t\t\t\t\t**EXAMENES**\n\n\n");
        p("------------------------------------------------------------------------------------------------------------------------\n\n");
        if(tare_exa==1){
        p("\t1>\ttarea 1\t(%d)\n\n\n\t2>\ttarea 2\t(%d)\n\n\n\t3>\ttarea 3\t(%d)\n\n\n",tareas[j][0],tareas[j][1],tareas[j][2]);
    p("\t4>\ttarea 4\t(%d)\n\n\n\t0>\tregresar al menu anterior\n\n\n\n",tareas[j][3]);}
    if(tare_exa==2){
    p("\t1>\texamen 1\t(%d)\n\n\n\t2>\texamen 2\t(%d)\n\n\n\t3>\texamen 3\t(%d)\n\n\n",tareas[j][0],tareas[j][1],tareas[j][2]);
    p("\t4>\ttexamen final\t(%d)\n\n\n\t0>\tregresar al menu anterior\n\n\n\n",tareas[j][3]);}
    p("::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t\t\t\t\tseleccione una opcion >>\t");
    s("%d",&a);
    if(tare_exa==1)
    p("\n\ningrese la nota de la tarea %d:\t",a);
    if(tare_exa==2)
       p("\n\ningrese la nota del examen %d:\t",a);
    if(a==1){
    s("%d",&tareas[j][0]);
    acumulador=acumulador+tareas[j][0];}
    if(a==2){
    s("%d",&tareas[j][1]);
    acumulador=acumulador+tareas[j][1];}
    if(a==3){
    s("%d",&tareas[j][2]);
    acumulador=acumulador+tareas[j][2];}
    if(a==4){
    s("%d",&tareas[j][3]);
    acumulador=acumulador+tareas[j][3];}
    system("cls");}while(a!=0);
     for(e=0;e<10;e++){
     for(int i=0; i<4;i++)
    f(notast,"%d\t",tareas[e][i]);
    f(notast,"\n");}
    fclose(notast);
    return 0;
}


    int lector(int lec){
        char caracter;
        int s=1;
        FILE *archivo;
        if(lec==1)
            archivo=fopen("horario.txt","r");
        if(lec==2)
            archivo=fopen("Cursos.txt","r");
        if(lec==3)
           archivo=fopen("Profesores.txt","r");
        if(lec==0)
            archivo=fopen("l.txt","r");
            if(lec==12)
                archivo=fopen("4to C.txt","r");
            if(lec==13)
                archivo=fopen("4to B.txt","r");
            if(lec==14)
                archivo=fopen("4to A.txt","r");

   if(archivo == NULL){
    perror("ERROR");
    return 1;
    }


    while(feof(archivo) == 0){
        caracter = fgetc(archivo);
        printf("%c",caracter);

    if(lec==13 || lec==14 || lec==12){
        if(caracter=='\n')
        printf("%d\t\t",s++);
    }}

    if(lec==13 || lec==14 || lec==12){
            for(s;s<=10;s++)
                p("\n%d",s);
    p("\n---------------------------");
    p("\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t oprima la tecla Enter para retornar al menu anterior >>\t");}
    fclose(archivo);
    if(lec!=0 && lec!=13 && lec!=14 && lec!=12){
    p("\n\n\n\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t oprima la tecla Enter para retornar al menu anterior >>\t");}
    getchar();
}

int contarabc(int cba){

FILE * archivo;
if(cba==1)
    archivo = fopen("4to A.txt","rt");
if(cba==2)
    archivo = fopen("4to B.txt","rt");
if(cba==3)
    archivo = fopen("4to C.txt","rt");
    if(archivo == NULL){
        perror("error en la apertura del archivo");
        return 1;
    }

    char caracter;
    int s=1;
    while(feof(archivo) == 0){
        caracter = fgetc(archivo);
        if(caracter=='\n')
            s++;
    }

    fclose(archivo);
    return s;
}
 int reporte(int cur,int tare_exa){
    struct resulados_cursos rc;
    FILE * notast;
    FILE *notase;
    FILE * archivo;
    int tareas[10][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int sumatareas[10]={0,0,0,0,0,0,0,0,0,0},sumaexamenes[10]={0,0,0,0,0,0,0,0,0,0},total[10]={0,0,0,0,0,0,0,0,0,0};
    int examenes[10][4]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int grad=4,j=0, a=0,acumulador=0,e=0;
    char *uno,*dos,*tres,*cuatro;
    char sec[2]={'a','b','c'};

        system("cls"); margen();
    p("\t\t\t\t\t\t**LISTADO DE NOTAS**\n\n");
    p("------------------------------------------------------------------------------------------------------------------------\n\n");
    p("\n\n\n\t1>\tGRADO:\t4\n\n\n\t2>\tSECCION:\t");
    s("%s",&sec[0]);
do{
    if(sec[0]=='a'||sec[0]=='A'){
   if(cur==1){
            notast=fopen("tareas_mate_A.txt","rt");
            notase=fopen("examenes_mate_A.txt","rt");}
    if(cur==2){
            notast=fopen("tareas_idi_A.txt","rt");
            notase=fopen("examenes_idi_A.txt","rt");}
    if(cur==3){
            notast=fopen("tareas_compu_A.txt","rt");
            notase=fopen("examenes_compu_A.txt","rt");}
    if(cur==4){
            notast=fopen("tareas_artp_A.txt","rt");
             notase=fopen("examenes_artp_A.txt","rt");}
    if(cur==5){
            notast=fopen("tareas_arti_A.txt","rt");
            notase=fopen("examenes_arti_A.txt","rt");}
    if(cur==6){
            notast=fopen("tareas_ciencias_A.txt","rt");
            notase=fopen("examenes_ciencias_A.txt","rt");}
    if(cur==7){
            notast=fopen("tareas_sociales_A.txt","rt");
            notase=fopen("examenes_sociales_A.txt","rt");}
    if(cur==8){
            notast=fopen("tareas_musica_A.txt","rt");
            notase=fopen("examenes_musica_A.txt","rt");}
    if(cur==9){
            notast=fopen("tareas_ingles_A.txt","rt");
            notase=fopen("examenes_ingles_A.txt","rt");}}

if(sec[0]=='b'||sec[0]=='B'){
    if(cur==1){
            notast=fopen("tareas_mate_B.txt","rt");
            notase=fopen("examenes_mate_B.txt","rt");}
    if(cur==2){
            notast=fopen("tareas_idi_B.txt","rt");
            notase=fopen("examenes_idi_B.txt","rt");}
    if(cur==3){
            notast=fopen("tareas_compu_B.txt","rt");
            notase=fopen("examenes_compu_B.txt","rt");}
    if(cur==4){
            notast=fopen("tareas_artp_B.txt","rt");
             notase=fopen("examenes_artp_B.txt","rt");}
    if(cur==5){
            notast=fopen("tareas_arti_B.txt","rt");
            notase=fopen("examenes_arti_B.txt","rt");}
    if(cur==6){
            notast=fopen("tareas_ciencias_B.txt","rt");
            notase=fopen("examenes_ciencias_B.txt","rt");}
    if(cur==7){
            notast=fopen("tareas_sociales_B.txt","rt");
            notase=fopen("examenes_sociales_B.txt","rt");}
    if(cur==8){
            notast=fopen("tareas_musica_B.txt","rt");
            notase=fopen("examenes_musica_B.txt","rt");}
    if(cur==9){
            notast=fopen("tareas_ingles_B.txt","rt");
            notase=fopen("examenes_ingles_B.txt","rt");}}

if(sec[0]=='c'||sec[0]=='C'){
    if(cur==1){
            notast=fopen("tareas_mate_C.txt","rt");
            notase=fopen("examenes_mate_C.txt","rt");}
    if(cur==2){
            notast=fopen("tareas_idi_C.txt","rt");
            notase=fopen("examenes_idi_C.txt","rt");}
    if(cur==3){
            notast=fopen("tareas_compu_C.txt","rt");
            notase=fopen("examenes_compu_C.txt","rt");}
    if(cur==4){
            notast=fopen("tareas_artp_C.txt","rt");
             notase=fopen("examenes_artp_C.txt","rt");}
    if(cur==5){
            notast=fopen("tareas_arti_C.txt","rt");
            notase=fopen("examenes_arti_C.txt","rt");}
    if(cur==6){
            notast=fopen("tareas_ciencias_C.txt","rt");
            notase=fopen("examenes_ciencias_C.txt","rt");}
    if(cur==7){
            notast=fopen("tareas_sociales_C.txt","rt");
            notase=fopen("examenes_sociales_C.txt","rt");}
    if(cur==8){
            notast=fopen("tareas_musica_C.txt","rt");
            notase=fopen("examenes_musica_C.txt","rt");}
    if(cur==9){
            notast=fopen("tareas_ingles_C.txt","rt");
            notase=fopen("examenes_ingles_C.txt","rt");}}
   system("cls");
    for(e=0; e<10;e++){
    fscanf(notast,"%s%s%s%s",&uno,&dos,&tres,&cuatro);
    tareas[e][0]=atoi(&uno);
    tareas[e][1]=atoi(&dos);
    tareas[e][2]=atoi(&tres);
    tareas[e][3]=atoi(&cuatro);}

    for(e=0; e<10;e++){
    fscanf(notase,"%s%s%s%s",&uno,&dos,&tres,&cuatro);
    examenes[e][0]=atoi(&uno);
    examenes[e][1]=atoi(&dos);
    examenes[e][2]=atoi(&tres);
    examenes[e][3]=atoi(&cuatro);}
    fclose(notast);
    fclose(notase);
     for(e=0;e<10;e++){
    sumatareas[e]=0;
     for(int i=0; i<4;i++)
    sumatareas[e]=sumatareas[e]+tareas[e][i];}
    for(e=0;e<10;e++){
    sumaexamenes[e]=0;
     for(int i=0; i<4;i++)
    sumaexamenes[e]=sumaexamenes[e]+examenes[e][i];}
    for(e=0; e<10; e++){
        total[e]=0;
    total[e]=sumatareas[e]+sumaexamenes[e];}
    for(e=0;e<10;e++){
     rc.notacurso[e][cur-1]=0;
    rc.notacurso[e][cur-1]=total[e];}
if(tare_exa==4)
        cur++;
        }while(tare_exa==4 && cur<10);

       margen();
if(tare_exa==3){
    p("\t\t\t\t\t\t**LISTADO DE NOTAS**\n\n");
    p("------------------------------------------------------------------------------------------------------------------------\n\n");
    p("Clave\tnombre\t\tTareas\tExamen 1\tExamen 2\tExamen 3\tFinal\ttotal\tapro/repro\n");}
if(tare_exa==4){
    p("\t\t\t\t\t\t**LISTADO DE NOTAS**\n\n");
    p("------------------------------------------------------------------------------------------------------------------------\n\n");
    p("Clave\tmate\tidioma\tcompu\tartes plast\tartes indus\tciencias\tsociales\tmusica\tingles\tpromedio\n");
    for(int k=0;k<10;k++){
            rc.notacurso[k][9]=0;
     for(int i=0; i<9;i++){
    rc.notacurso[k][9]=rc.notacurso[k][9]+rc.notacurso[k][i];}}
}
    if(sec[0]=='a'||sec[0]=='A'){
    archivo = fopen("4to A.txt","rt");}
    if(sec[0]=='b'||sec[0]=='B'){
    archivo = fopen("4to B.txt","rt");}
    if(sec[0]=='c'||sec[0]=='C'){
    archivo = fopen("4to C.txt","rt");}
    if(archivo == NULL){
        perror("error en la apertura del archivo");
        return 1;
    }
    char caracter;
    int s=1;
    int ay=0;
    while(feof(archivo) == 0){
        caracter = fgetc(archivo);
        if(caracter!='\n' && tare_exa==3)
        printf("%c",caracter);
        if(caracter=='\n' && tare_exa==3){
        if(ay>=1){
    p("\t\t%d\t%d\t\t%d\t\t%d\t\t%d\t%d\t",sumatareas[s-2],examenes[s-2][0],examenes[s-2][1],examenes[s-2][2],examenes[s-2][3],total[s-2]);
    if(total[s-2]<60)
        p("reprobado\n");
        if(total[s-2]>=60)
        p("aprobado\n");
    }
    p("%d\t",s++);  ay++;}
    if(caracter=='\n' && tare_exa==4){
        if(ay>=1){
    p("%d\t%d\t%d\t%d\t\t",rc.notacurso[s-2][0],rc.notacurso[s-2][1],rc.notacurso[s-2][2],rc.notacurso[s-2][3]);
    p("%d\t\t%d\t\t%d\t\t%d\t",rc.notacurso[s-2][4],rc.notacurso[s-2][5],rc.notacurso[s-2][6],rc.notacurso[s-2][7]);
    p("%d\t%d\n",rc.notacurso[s-2][8],rc.notacurso[s-2][9]/9);
    }
    p("%d\t",s++);  ay++;}
    }
    if(tare_exa==3){
    p("\t\t%d\t%d\t\t%d\t\t%d\t\t%d\t%d\t",sumatareas[s-2],examenes[s-2][0],examenes[s-2][1],examenes[s-2][2],examenes[s-2][3],total[s-2]);
    if(total[s-2]<60)
        p("reprobado\n");
        if(total[s-2]>=60)
        p("aprobado\n");}
        if(tare_exa==4){
    p("%d\t%d\t%d\t%d\t\t",rc.notacurso[s-2][0],rc.notacurso[s-2][1],rc.notacurso[s-2][2],rc.notacurso[s-2][3]);
    p("%d\t\t%d\t\t%d\t\t%d\t",rc.notacurso[s-2][4],rc.notacurso[s-2][5],rc.notacurso[s-2][6],rc.notacurso[s-2][7]);
    p("%d\t%d\n",rc.notacurso[s-2][8],rc.notacurso[s-2][9]/9); }
    fclose(archivo);
    p("\n------------------------------------------------------------------------------------------------------------------------\n\n");
    p("\n\n\n::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n");
    p("\t oprima la tecla Enter para retornar al menu anterior >>\t");
    getch();
    return 0;
}


