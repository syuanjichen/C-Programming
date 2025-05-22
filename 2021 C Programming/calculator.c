#include <stdio.h>

int det22(int a1, int a2, int b1, int b2)
{
    return a1*b2-a2*b1;
}

int det33(int a1,int a2,int a3,int b1,int b2,int b3,int c1,int c2,int c3)
{
    return a1*(det22(b2,b3,c2,c3))-a2*(det22(b1,b3,c1,c3))+a3*(det22(b1,b2,c1,c2));
}

int main()
{
    int mode,a1,a2,a3,b1,b2,b3,c1,c2,c3;
    mode=0,a1=0,a2=0,a3=0,b1=0,b2=0,b3=0,c1=0,c2=0,c3=0;

    printf("1. Dot 22\n");
    printf("2. Dot 33\n");
    printf("3. Cross 33\n");
    printf("4. Det 22\n");
    printf("5. Det 33\n");
    printf("6. Linear Equation with two unknowns\n");
    printf("7. Project Point and Symmetry Point 2d\n");
    printf("8. Project Point and Symmetry Point 3d\n");
    printf("Type in mode:");

    while(scanf("%d",&mode)!=EOF)
    {
        printf("mode = %d\n",mode);

        if(mode==0)
        {
            printf("Calculator off.\n");
            break;
        }

        else if(mode==1)
        {
            fflush(stdin);
            printf("Type in the first vector:");
            scanf("(%d,%d)",&a1,&a2);
            printf("Type in the second vector:");
            fflush(stdin);
            scanf("(%d,%d)",&b1,&b2);
            printf("(%d,%d) dot (%d,%d) = %d\n",a1,a2,b1,b2,a1*b1+a2*b2);
        }

        else if(mode==2)
        {
            fflush(stdin);
            printf("Type in the first vector:");
            scanf("(%d,%d,%d)",&a1,&a2,&a3);
            printf("Type in the second vector:");
            fflush(stdin);
            scanf("(%d,%d,%d)",&b1,&b2,&b3);
            printf("(%d,%d,%d) dot (%d,%d,%d) = %d\n",a1,a2,a3,b1,b2,b3,a1*b1+a2*b2+a3*b3);
        }

        else if(mode==3)
        {
            fflush(stdin);
            printf("Type in the first vector:");
            scanf("(%d,%d,%d)",&a1,&a2,&a3);
            printf("Type in the second vector:");
            fflush(stdin);
            scanf("(%d,%d,%d)",&b1,&b2,&b3);
            printf("(%d,%d,%d) cross (%d,%d,%d) = (%d,%d,%d)\n",a1,a2,a3,b1,b2,b3,det22(a2,a3,b2,b3),-det22(a1,a3,b1,b3),det22(a1,a2,b1,b2));
        }

        else if(mode==4)
        {
            fflush(stdin);
            printf("Type in the first vector (row):");
            scanf("(%d,%d)",&a1,&a2);
            printf("Type in the second vector (row):");
            fflush(stdin);
            scanf("(%d,%d)",&b1,&b2);
            printf("|%3d    %3d|\n",a1,a2);
            printf("|          | = %d\n",det22(a1,a2,b1,b2));
            printf("|%3d    %3d|\n",b1,b2);
        }

        else if(mode==5)
        {
            fflush(stdin);
            printf("Type in the first vector (row):");
            scanf("(%d,%d,%d)",&a1,&a2,&a3);
            printf("Type in the second vector (row):");
            fflush(stdin);
            scanf("(%d,%d,%d)",&b1,&b2,&b3);
            printf("Type in the third vector (row):");
            fflush(stdin);
            scanf("(%d,%d,%d)",&c1,&c2,&c3);
            printf("|%3d  %3d  %3d|\n",a1,a2,a3);
            printf("|%3d  %3d  %3d| = %d\n",b1,b2,b3,det33(a1,a2,a3,b1,b2,b3,c1,c2,c3));
            printf("|%3d  %3d  %3d|\n",c1,c2,c3);
        }

        else if(mode==6)
        {
            int delta,delta_x,delta_y;
            float x,y;
            fflush(stdin);
            printf("The first equation:");
            scanf("%dx + %dy = %d",&a1,&b1,&c1);
            printf("The second equation:");
            fflush(stdin);
            scanf("%dx + %dy = %d",&a2,&b2,&c2);

            delta=det22(a1,b1,a2,b2);
            delta_x=det22(c1,b1,c2,b2);
            delta_y=det22(a1,c1,a2,c2);

            if(delta!=0)
            {
                x=(float)delta_x/delta;
                y=(float)delta_y/delta;
                printf("x = %.4f, y = %.4f\n",x,y);
            }
            else
            {
                if(delta_x==0 && delta_y==0)
                    printf("Infinite solutions.\n");
                else
                    printf("No solution.\n");
            }
        }

        else if(mode==7)
        {
            float k;
            fflush(stdin);
            printf("The origin point:");
            scanf("(%d,%d)",&a1,&a2);
            printf("The equation of Line in ax+by+c=0 form:");
            fflush(stdin);
            scanf("%dx + %dy + %d = 0",&b1,&b2,&b3);
            k=(-1.0)*(a1*b1+a2*b2+b3)/(b1*b1+b2*b2);

            printf("Project Point:(%.4f,%.4f)\n",(float)(a1+b1*k),(float)(a2+b2*k));
            printf("Symmetry Point:(%.4f,%.4f)\n",(float)(a1+2*b1*k),(float)(a2+2*b2*k));
        }

        else if(mode==8)
        {
            float k;
            fflush(stdin);
            printf("The origin point:");
            scanf("(%d,%d,%d)",&a1,&a2,&a3);
            printf("The equation of Plane in ax+by+cz+d=0 form:");
            fflush(stdin);
            scanf("%dx + %dy + %dz + %d = 0",&b1,&b2,&b3,&c1);
            k=(-1.0)*(a1*b1+a2*b2+a3*b3+c1)/(b1*b1+b2*b2+b3*b3);

            printf("Project Point:(%.4f,%.4f,%.4f)\n",(float)(a1+b1*k),(float)(a2+b2*k),(float)(a3+b3*k));
            printf("Symmetry Point:(%.4f,%.4f,%.4f)\n",(float)(a1+2*b1*k),(float)(a2+2*b2*k),(float)(a3+2*b3*k));
        }
    }
    
    return 0;
}