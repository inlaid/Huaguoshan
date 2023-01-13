#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

#define max(x,y)  (x>y?x:y)
#define min(x,y)  (x>y?y:x)

#ifdef _WIN32
#include <dos.h>
#include <conio.h>
#endif

#include "../sheng_util.h"

#define NPOLAR 12

/* ROUTINES DECLARATION */

int main(int argc, char *argv[])
{
    /*******************/
    /* LOCAL VARIABLES */
    /*******************/

    /**Input/ file pointer arrays*/
    FILE *in_file[3];
    FILE *confFILE;

    /** output files */
    FILE *Touzi_alphas_class[8];
    FILE *Touzi_phis_class[8];
    FILE *Touzi_tau_class[8];


    float **data_Touzi_alphas,**data_Touzi_phis,**data_Touzi_tau;

    char baseDIR[1024];
    char filename[1024];
    char serial[20];
    int ROWS,COLS,CHL,row,Label,X,X1,X2,Y,temp,start,top_X,top_Y,left_X,left_Y,right_X,right_Y,bottom_X,bottom_Y;

    float K=0.0;

    char *file_list[NPOLAR] =
    {
        "l1p1_alphas.img", "l1p1_phis.img", "l1p1_tau.img"
    };

    /* Input/Output configurations */
    if ((confFILE = fopen("touziconfig", "r")) == NULL)
        edit_error("Could not open input file : ", "errorconfig");
    fscanf(confFILE, "%s\n", baseDIR);
    fscanf(confFILE, "%i\n", &ROWS);
    fscanf(confFILE, "%i\n", &COLS);
    fscanf(confFILE, "%i\n", &top_X);
    fscanf(confFILE, "%i\n", &top_Y);
    fscanf(confFILE, "%i\n", &left_X);
    fscanf(confFILE, "%i\n", &left_Y);
    fscanf(confFILE, "%i\n", &right_X);
    fscanf(confFILE, "%i\n", &right_Y);
    fscanf(confFILE, "%i\n", &bottom_X);
    fscanf(confFILE, "%i\n", &bottom_Y);
    fclose(confFILE);


    /** 实际不需要读取整个图像*/
    ROWS = bottom_Y;

    /** 分配内存  二维数组*/
    data_Touzi_alphas = matrix_float(ROWS,COLS);
    data_Touzi_phis = matrix_float(ROWS,COLS);
    data_Touzi_tau = matrix_float(ROWS,COLS);

    /**打开统计数据输出文件*/
    /** 1 **/
    temp =0;

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_alphas_",serial);
    if ((Touzi_alphas_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_alphas_",serial);
    if ((Touzi_alphas_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_alphas_",serial);
    if ((Touzi_alphas_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_alphas_",serial);
    if ((Touzi_alphas_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_alphas_",serial);
    if ((Touzi_alphas_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_alphas_",serial);
    if ((Touzi_alphas_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_alphas_",serial);
    if ((Touzi_alphas_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_alphas_",serial);
    if ((Touzi_alphas_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_alphas_",serial);
    if ((Touzi_alphas_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    /**  2 **/

    temp =0;
    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_phis_",serial);
    if ((Touzi_phis_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_phis_",serial);
    if ((Touzi_phis_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_phis_",serial);
    if ((Touzi_phis_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_phis_",serial);
    if ((Touzi_phis_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_phis_",serial);
    if ((Touzi_phis_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_phis_",serial);
    if ((Touzi_phis_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_phis_",serial);
    if ((Touzi_phis_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_phis_",serial);
    if ((Touzi_phis_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_phis_",serial);
    if ((Touzi_phis_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    /** 3  **/
    temp =0;
    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_tau_",serial);
    if ((Touzi_tau_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_tau_",serial);
    if ((Touzi_tau_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_tau_",serial);
    if ((Touzi_tau_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_tau_",serial);
    if ((Touzi_tau_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_tau_",serial);
    if ((Touzi_tau_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_tau_",serial);
    if ((Touzi_tau_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_tau_",serial);
    if ((Touzi_tau_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_tau_",serial);
    if ((Touzi_tau_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    itoa(temp,serial,10);
    sprintf(filename, "%s%s%s", baseDIR, "Touzi_tau_",serial);
    if ((Touzi_tau_class[temp++] = fopen(filename, "w")) == NULL)
        edit_error("Could not open input file : ", filename);

    /** **/

    CHL = 0;
    start = 0;
    sprintf(filename, "%s%s", baseDIR, file_list[CHL]);
    if ((in_file[CHL] = fopen(filename, "rb")) == NULL)
        edit_error("Could not open input file : ", filename);
    /** 按行读取数据文件中的数据*/
    for(row=0; row<ROWS; row++)
    {
        fread(&data_Touzi_alphas[row][start], sizeof(float),COLS,in_file[CHL]);
    }
    fclose(in_file[CHL]);

    CHL =1 ;
    sprintf(filename, "%s%s", baseDIR, file_list[CHL]);
    if ((in_file[CHL] = fopen(filename, "rb")) == NULL)
        edit_error("Could not open input file : ", filename);
    /** 按行读取数据文件中的数据*/
    for(row=0; row<ROWS; row++)
    {
        fread(&data_Touzi_phis[row][start], sizeof(float), COLS, in_file[CHL]);
    }
    fclose(in_file[CHL]);

    CHL = 2;
    sprintf(filename, "%s%s", baseDIR, file_list[CHL]);
    if ((in_file[CHL] = fopen(filename, "rb")) == NULL)
        edit_error("Could not open input file : ", filename);
    /** 按行读取数据文件中的数据*/
    for(row=0; row<ROWS; row++)
    {
        fread(&data_Touzi_tau[row][start], sizeof(float), COLS, in_file[CHL]);
    }
    fclose(in_file[CHL]);



    /** start to calculate each scattering class 's median **/
    /**  divide the a four-sided polygon as three section **/

    /** section 1 **/
    temp = min(left_Y,right_Y);
    for(Y = top_Y; Y < temp; Y++)
    {
        if(Y == top_Y)
        {
            continue;
        }

        K = (float)(left_Y-top_Y)/(float)(left_X-top_X);
        X1 = ceil((Y-top_Y)/K) + top_X;
        K = (float)(right_Y-top_Y)/(float)(right_X-top_X);
        X2 = ceil((Y-top_Y)/K) + top_X;
        for(X = X1; X <= X2; X++)
        {
            Label = 0;
            if( data_Touzi_alphas[Y][X] > 0.0 && data_Touzi_alphas[Y][X]<= 0.174)
            {
                Label = 0;
            }
            if( data_Touzi_alphas[Y][X] > 0.174 && data_Touzi_alphas[Y][X]<= 0.348)
            {
                Label = 1;
            }
            if( data_Touzi_alphas[Y][X] > 0.348 && data_Touzi_alphas[Y][X]<= 0.522)
            {
                Label = 2;
            }
            if( data_Touzi_alphas[Y][X] > 0.522 && data_Touzi_alphas[Y][X]<= 0.696)
            {
                Label = 3;
            }
            if( data_Touzi_alphas[Y][X] > 0.696 && data_Touzi_alphas[Y][X]<= 0.87)
            {
                Label = 4;
            }
            if( data_Touzi_alphas[Y][X] > 0.87 && data_Touzi_alphas[Y][X]<= 1.044)
            {
                Label = 5;
            }
            if( data_Touzi_alphas[Y][X] > 1.044 && data_Touzi_alphas[Y][X]<= 1.218)
            {
                Label = 6;
            }
            if( data_Touzi_alphas[Y][X] > 1.218 && data_Touzi_alphas[Y][X]<= 1.392)
            {
                Label = 7;
            }
            if( data_Touzi_alphas[Y][X] > 1.392)
            {
                Label = 8;
            }

            switch(Label)
            {
            case 0:
                fprintf(Touzi_alphas_class[0],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 1:
                fprintf(Touzi_alphas_class[1],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 2:
                fprintf(Touzi_alphas_class[2],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 3:
                fprintf(Touzi_alphas_class[3],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 4:
                fprintf(Touzi_alphas_class[4],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 5:
                fprintf(Touzi_alphas_class[5],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 6:
                fprintf(Touzi_alphas_class[6],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 7:
                fprintf(Touzi_alphas_class[7],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 8:
                fprintf(Touzi_alphas_class[8],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            }

            Label = 0;
            if( data_Touzi_phis[Y][X] > -1.57 && data_Touzi_phis[Y][X]<= -1.221)
            {
                Label = 0;
            }
            if( data_Touzi_phis[Y][X] > 0.174 && data_Touzi_phis[Y][X]<= -0.872)
            {
                Label = 1;
            }
            if( data_Touzi_phis[Y][X] > -0.872 && data_Touzi_phis[Y][X]<= -0.523)
            {
                Label = 2;
            }
            if( data_Touzi_phis[Y][X] > -0.523 && data_Touzi_phis[Y][X]<= -0.174)
            {
                Label = 3;
            }
            if( data_Touzi_phis[Y][X] > -0.174 && data_Touzi_phis[Y][X]<= 0.0)
            {
                Label = 4;
            }
            if( data_Touzi_phis[Y][X] > 0.0 && data_Touzi_phis[Y][X]<= 0.349)
            {
                Label = 5;
            }
            if( data_Touzi_phis[Y][X] > 0.349 && data_Touzi_phis[Y][X]<= 0.698)
            {
                Label = 6;
            }
            if( data_Touzi_phis[Y][X] > 0.698 && data_Touzi_phis[Y][X]<= 1.047)
            {
                Label = 7;
            }
            if( data_Touzi_phis[Y][X] > 1.047)
            {
                Label = 8;
            }

            switch(Label)
            {
            case 0:
                fprintf(Touzi_phis_class[0],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 1:
                fprintf(Touzi_phis_class[1],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 2:
                fprintf(Touzi_phis_class[2],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 3:
                fprintf(Touzi_phis_class[3],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 4:
                fprintf(Touzi_phis_class[4],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 5:
                fprintf(Touzi_phis_class[5],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 6:
                fprintf(Touzi_phis_class[6],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 7:
                fprintf(Touzi_phis_class[7],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 8:
                fprintf(Touzi_phis_class[8],"%f\n",data_Touzi_phis[Y][X]);
                break;
            }

            Label = 0;
            if( data_Touzi_tau[Y][X] > -0.785 && data_Touzi_tau[Y][X]<= -0.611)
            {
                Label = 0;
            }
            if( data_Touzi_tau[Y][X] > -0.611 && data_Touzi_tau[Y][X]<= -0.437)
            {
                Label = 1;
            }
            if( data_Touzi_tau[Y][X] > -0.437 && data_Touzi_tau[Y][X]<= -0.263)
            {
                Label = 2;
            }
            if( data_Touzi_tau[Y][X] > -0.263 && data_Touzi_tau[Y][X]<= -0.089)
            {
                Label = 3;
            }
            if( data_Touzi_tau[Y][X] > -0.089 && data_Touzi_tau[Y][X]<= 0.0)
            {
                Label = 4;
            }
            if( data_Touzi_tau[Y][X] > 0.0 && data_Touzi_tau[Y][X]<= 0.174)
            {
                Label = 5;
            }
            if( data_Touzi_tau[Y][X] > 0.174 && data_Touzi_tau[Y][X]<= 0.348)
            {
                Label = 6;
            }
            if( data_Touzi_tau[Y][X] > 0.348 && data_Touzi_tau[Y][X]<= 0.522)
            {
                Label = 7;
            }
            if( data_Touzi_tau[Y][X] > 0.522)
            {
                Label = 8;
            }

            switch(Label)
            {
            case 0:
                fprintf(Touzi_tau_class[0],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 1:
                fprintf(Touzi_tau_class[1],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 2:
                fprintf(Touzi_tau_class[2],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 3:
                fprintf(Touzi_tau_class[3],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 4:
                fprintf(Touzi_tau_class[4],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 5:
                fprintf(Touzi_tau_class[5],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 6:
                fprintf(Touzi_tau_class[6],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 7:
                fprintf(Touzi_tau_class[7],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 8:
                fprintf(Touzi_tau_class[8],"%f\n",data_Touzi_tau[Y][X]);
                break;
            }
        }// end of for
    }

    /** section 2 **/
    temp = max(left_Y,right_Y);
    for(; Y <= temp; Y++)
    {
        if(left_Y < right_Y)
        {
            K = (float)(left_Y-bottom_Y)/(float)(left_X-bottom_X);
            X1 = ceil((Y-left_Y)/K) + left_X;
            K = (float)(right_Y-top_Y)/(float)(right_X-top_X);
            X2 = ceil((Y-top_Y)/K) + top_X;
        }
        else
        {
            K = (float)(left_Y-top_Y)/(float)(left_X-top_X);
            X1 = ceil((Y-left_Y)/K) + left_X;
            K = (float)(right_Y-bottom_Y)/(float)(right_X-bottom_X);
            X2 = ceil((Y-bottom_Y)/K) + bottom_X;
        }

        for(X = X1; X <= X2; X++)
        {
            Label = 0;
            if( data_Touzi_alphas[Y][X] > 0.0 && data_Touzi_alphas[Y][X]<= 0.174)
            {
                Label = 0;
            }
            if( data_Touzi_alphas[Y][X] > 0.174 && data_Touzi_alphas[Y][X]<= 0.348)
            {
                Label = 1;
            }
            if( data_Touzi_alphas[Y][X] > 0.348 && data_Touzi_alphas[Y][X]<= 0.522)
            {
                Label = 2;
            }
            if( data_Touzi_alphas[Y][X] > 0.522 && data_Touzi_alphas[Y][X]<= 0.696)
            {
                Label = 3;
            }
            if( data_Touzi_alphas[Y][X] > 0.696 && data_Touzi_alphas[Y][X]<= 0.87)
            {
                Label = 4;
            }
            if( data_Touzi_alphas[Y][X] > 0.87 && data_Touzi_alphas[Y][X]<= 1.044)
            {
                Label = 5;
            }
            if( data_Touzi_alphas[Y][X] > 1.044 && data_Touzi_alphas[Y][X]<= 1.218)
            {
                Label = 6;
            }
            if( data_Touzi_alphas[Y][X] > 1.218 && data_Touzi_alphas[Y][X]<= 1.392)
            {
                Label = 7;
            }
            if( data_Touzi_alphas[Y][X] > 1.392)
            {
                Label = 8;
            }

            switch(Label)
            {
            case 0:
                fprintf(Touzi_alphas_class[0],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 1:
                fprintf(Touzi_alphas_class[1],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 2:
                fprintf(Touzi_alphas_class[2],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 3:
                fprintf(Touzi_alphas_class[3],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 4:
                fprintf(Touzi_alphas_class[4],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 5:
                fprintf(Touzi_alphas_class[5],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 6:
                fprintf(Touzi_alphas_class[6],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 7:
                fprintf(Touzi_alphas_class[7],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 8:
                fprintf(Touzi_alphas_class[8],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            }

            Label = 0;
            if( data_Touzi_phis[Y][X] > -1.57 && data_Touzi_phis[Y][X]<= -1.221)
            {
                Label = 0;
            }
            if( data_Touzi_phis[Y][X] > 0.174 && data_Touzi_phis[Y][X]<= -0.872)
            {
                Label = 1;
            }
            if( data_Touzi_phis[Y][X] > -0.872 && data_Touzi_phis[Y][X]<= -0.523)
            {
                Label = 2;
            }
            if( data_Touzi_phis[Y][X] > -0.523 && data_Touzi_phis[Y][X]<= -0.174)
            {
                Label = 3;
            }
            if( data_Touzi_phis[Y][X] > -0.174 && data_Touzi_phis[Y][X]<= 0.0)
            {
                Label = 4;
            }
            if( data_Touzi_phis[Y][X] > 0.0 && data_Touzi_phis[Y][X]<= 0.349)
            {
                Label = 5;
            }
            if( data_Touzi_phis[Y][X] > 0.349 && data_Touzi_phis[Y][X]<= 0.698)
            {
                Label = 6;
            }
            if( data_Touzi_phis[Y][X] > 0.698 && data_Touzi_phis[Y][X]<= 1.047)
            {
                Label = 7;
            }
            if( data_Touzi_phis[Y][X] > 1.047)
            {
                Label = 8;
            }

            switch(Label)
            {
            case 0:
                fprintf(Touzi_phis_class[0],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 1:
                fprintf(Touzi_phis_class[1],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 2:
                fprintf(Touzi_phis_class[2],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 3:
                fprintf(Touzi_phis_class[3],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 4:
                fprintf(Touzi_phis_class[4],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 5:
                fprintf(Touzi_phis_class[5],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 6:
                fprintf(Touzi_phis_class[6],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 7:
                fprintf(Touzi_phis_class[7],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 8:
                fprintf(Touzi_phis_class[8],"%f\n",data_Touzi_phis[Y][X]);
                break;
            }

            Label = 0;
            if( data_Touzi_tau[Y][X] > -0.785 && data_Touzi_tau[Y][X]<= -0.611)
            {
                Label = 0;
            }
            if( data_Touzi_tau[Y][X] > -0.611 && data_Touzi_tau[Y][X]<= -0.437)
            {
                Label = 1;
            }
            if( data_Touzi_tau[Y][X] > -0.437 && data_Touzi_tau[Y][X]<= -0.263)
            {
                Label = 2;
            }
            if( data_Touzi_tau[Y][X] > -0.263 && data_Touzi_tau[Y][X]<= -0.089)
            {
                Label = 3;
            }
            if( data_Touzi_tau[Y][X] > -0.089 && data_Touzi_tau[Y][X]<= 0.0)
            {
                Label = 4;
            }
            if( data_Touzi_tau[Y][X] > 0.0 && data_Touzi_tau[Y][X]<= 0.174)
            {
                Label = 5;
            }
            if( data_Touzi_tau[Y][X] > 0.174 && data_Touzi_tau[Y][X]<= 0.348)
            {
                Label = 6;
            }
            if( data_Touzi_tau[Y][X] > 0.348 && data_Touzi_tau[Y][X]<= 0.522)
            {
                Label = 7;
            }
            if( data_Touzi_tau[Y][X] > 0.522)
            {
                Label = 8;
            }

            switch(Label)
            {
            case 0:
                fprintf(Touzi_tau_class[0],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 1:
                fprintf(Touzi_tau_class[1],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 2:
                fprintf(Touzi_tau_class[2],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 3:
                fprintf(Touzi_tau_class[3],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 4:
                fprintf(Touzi_tau_class[4],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 5:
                fprintf(Touzi_tau_class[5],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 6:
                fprintf(Touzi_tau_class[6],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 7:
                fprintf(Touzi_tau_class[7],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 8:
                fprintf(Touzi_tau_class[8],"%f\n",data_Touzi_tau[Y][X]);
                break;
            }
        }
    }

    /** section 3 **/
    for(; Y < bottom_Y; Y++)
    {
        K = (float)(left_Y-bottom_Y)/(float)(left_X-bottom_X);
        X1 = ceil((Y-bottom_Y)/K) + bottom_X;
        K = (float)(right_Y-bottom_Y)/(float)(right_X-bottom_X);
        X2 = ceil((Y-bottom_Y)/K) + bottom_X;
        for(X = X1; X <= X2; X++)
        {
            Label = 0;
            if( data_Touzi_alphas[Y][X] > 0.0 && data_Touzi_alphas[Y][X]<= 0.174)
            {
                Label = 0;
            }
            if( data_Touzi_alphas[Y][X] > 0.174 && data_Touzi_alphas[Y][X]<= 0.348)
            {
                Label = 1;
            }
            if( data_Touzi_alphas[Y][X] > 0.348 && data_Touzi_alphas[Y][X]<= 0.522)
            {
                Label = 2;
            }
            if( data_Touzi_alphas[Y][X] > 0.522 && data_Touzi_alphas[Y][X]<= 0.696)
            {
                Label = 3;
            }
            if( data_Touzi_alphas[Y][X] > 0.696 && data_Touzi_alphas[Y][X]<= 0.87)
            {
                Label = 4;
            }
            if( data_Touzi_alphas[Y][X] > 0.87 && data_Touzi_alphas[Y][X]<= 1.044)
            {
                Label = 5;
            }
            if( data_Touzi_alphas[Y][X] > 1.044 && data_Touzi_alphas[Y][X]<= 1.218)
            {
                Label = 6;
            }
            if( data_Touzi_alphas[Y][X] > 1.218 && data_Touzi_alphas[Y][X]<= 1.392)
            {
                Label = 7;
            }
            if( data_Touzi_alphas[Y][X] > 1.392)
            {
                Label = 8;
            }

            switch(Label)
            {
            case 0:
                fprintf(Touzi_alphas_class[0],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 1:
                fprintf(Touzi_alphas_class[1],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 2:
                fprintf(Touzi_alphas_class[2],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 3:
                fprintf(Touzi_alphas_class[3],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 4:
                fprintf(Touzi_alphas_class[4],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 5:
                fprintf(Touzi_alphas_class[5],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 6:
                fprintf(Touzi_alphas_class[6],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 7:
                fprintf(Touzi_alphas_class[7],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            case 8:
                fprintf(Touzi_alphas_class[8],"%f\n",data_Touzi_alphas[Y][X]);
                break;
            }

            Label = 0;
            if( data_Touzi_phis[Y][X] > -1.57 && data_Touzi_phis[Y][X]<= -1.221)
            {
                Label = 0;
            }
            if( data_Touzi_phis[Y][X] > 0.174 && data_Touzi_phis[Y][X]<= -0.872)
            {
                Label = 1;
            }
            if( data_Touzi_phis[Y][X] > -0.872 && data_Touzi_phis[Y][X]<= -0.523)
            {
                Label = 2;
            }
            if( data_Touzi_phis[Y][X] > -0.523 && data_Touzi_phis[Y][X]<= -0.174)
            {
                Label = 3;
            }
            if( data_Touzi_phis[Y][X] > -0.174 && data_Touzi_phis[Y][X]<= 0.0)
            {
                Label = 4;
            }
            if( data_Touzi_phis[Y][X] > 0.0 && data_Touzi_phis[Y][X]<= 0.349)
            {
                Label = 5;
            }
            if( data_Touzi_phis[Y][X] > 0.349 && data_Touzi_phis[Y][X]<= 0.698)
            {
                Label = 6;
            }
            if( data_Touzi_phis[Y][X] > 0.698 && data_Touzi_phis[Y][X]<= 1.047)
            {
                Label = 7;
            }
            if( data_Touzi_phis[Y][X] > 1.047)
            {
                Label = 8;
            }

            switch(Label)
            {
            case 0:
                fprintf(Touzi_phis_class[0],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 1:
                fprintf(Touzi_phis_class[1],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 2:
                fprintf(Touzi_phis_class[2],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 3:
                fprintf(Touzi_phis_class[3],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 4:
                fprintf(Touzi_phis_class[4],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 5:
                fprintf(Touzi_phis_class[5],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 6:
                fprintf(Touzi_phis_class[6],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 7:
                fprintf(Touzi_phis_class[7],"%f\n",data_Touzi_phis[Y][X]);
                break;
            case 8:
                fprintf(Touzi_phis_class[8],"%f\n",data_Touzi_phis[Y][X]);
                break;
            }

            Label = 0;
            if( data_Touzi_tau[Y][X] > -0.785 && data_Touzi_tau[Y][X]<= -0.611)
            {
                Label = 0;
            }
            if( data_Touzi_tau[Y][X] > -0.611 && data_Touzi_tau[Y][X]<= -0.437)
            {
                Label = 1;
            }
            if( data_Touzi_tau[Y][X] > -0.437 && data_Touzi_tau[Y][X]<= -0.263)
            {
                Label = 2;
            }
            if( data_Touzi_tau[Y][X] > -0.263 && data_Touzi_tau[Y][X]<= -0.089)
            {
                Label = 3;
            }
            if( data_Touzi_tau[Y][X] > -0.089 && data_Touzi_tau[Y][X]<= 0.0)
            {
                Label = 4;
            }
            if( data_Touzi_tau[Y][X] > 0.0 && data_Touzi_tau[Y][X]<= 0.174)
            {
                Label = 5;
            }
            if( data_Touzi_tau[Y][X] > 0.174 && data_Touzi_tau[Y][X]<= 0.348)
            {
                Label = 6;
            }
            if( data_Touzi_tau[Y][X] > 0.348 && data_Touzi_tau[Y][X]<= 0.522)
            {
                Label = 7;
            }
            if( data_Touzi_tau[Y][X] > 0.522)
            {
                Label = 8;
            }

            switch(Label)
            {
            case 0:
                fprintf(Touzi_tau_class[0],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 1:
                fprintf(Touzi_tau_class[1],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 2:
                fprintf(Touzi_tau_class[2],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 3:
                fprintf(Touzi_tau_class[3],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 4:
                fprintf(Touzi_tau_class[4],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 5:
                fprintf(Touzi_tau_class[5],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 6:
                fprintf(Touzi_tau_class[6],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 7:
                fprintf(Touzi_tau_class[7],"%f\n",data_Touzi_tau[Y][X]);
                break;
            case 8:
                fprintf(Touzi_tau_class[8],"%f\n",data_Touzi_tau[Y][X]);
                break;
            }
        }//end of for
    }

    /**释放内存*/
    free_matrix_float(data_Touzi_alphas,ROWS);
    free_matrix_float(data_Touzi_phis,ROWS);
    free_matrix_float(data_Touzi_tau,ROWS);

    temp =0;
    fclose(Touzi_alphas_class[temp++]);
    fclose(Touzi_alphas_class[temp++]);
    fclose(Touzi_alphas_class[temp++]);
    fclose(Touzi_alphas_class[temp++]);
    fclose(Touzi_alphas_class[temp++]);
    fclose(Touzi_alphas_class[temp++]);
    fclose(Touzi_alphas_class[temp++]);
    fclose(Touzi_alphas_class[temp++]);
    fclose(Touzi_alphas_class[temp++]);

    temp =0;
    fclose(Touzi_phis_class[temp++]);
    fclose(Touzi_phis_class[temp++]);
    fclose(Touzi_phis_class[temp++]);
    fclose(Touzi_phis_class[temp++]);
    fclose(Touzi_phis_class[temp++]);
    fclose(Touzi_phis_class[temp++]);
    fclose(Touzi_phis_class[temp++]);
    fclose(Touzi_phis_class[temp++]);
    fclose(Touzi_phis_class[temp++]);

    temp =0;
    fclose(Touzi_tau_class[temp++]);
    fclose(Touzi_tau_class[temp++]);
    fclose(Touzi_tau_class[temp++]);
    fclose(Touzi_tau_class[temp++]);
    fclose(Touzi_tau_class[temp++]);
    fclose(Touzi_tau_class[temp++]);
    fclose(Touzi_tau_class[temp++]);
    fclose(Touzi_tau_class[temp++]);
    fclose(Touzi_tau_class[temp++]);


    return 1;


}
