#include <stdio.h>

void diagram() {
	printf("Software created by Heymun Pareek, IMT2024-029 - Kindly enter full screen mode.\n____________________________________Circuit Analysis Software____________________________________\n\n");
    printf("\n\n\t\t\t\t\tCIRCUIT DIAGRAM\n\n");
    printf("\t\t\t\t       R1(I1)     c     R2(I2)\n");
    printf("\t\t\t\t b-----****-------------****---e\n");
    printf("\t\t\t\t  |               |           |\n");
    printf("\t\t\t\t  |               |           |\n");
    printf("\t\t\t\t  +               *           +\n");
    printf("\t\t\t\t (V1)          R3(I3)  	    (V2)\n");
    printf("\t\t\t\t  -               *           -\n");
    printf("\t\t\t\t  |               |           |\n");
    printf("\t\t\t\t  |               |           |\n");
    printf("\t\t\t\t a-----****-------------****---f\n");
    printf("\t\t\t\t       R4(I1)     d     R5(I2)\n");
}

int main() {
    diagram();
	double R1, R2, R3, R4, R5, V1, V2;
	printf("\n\nEnter R1: ");
	scanf("%lf",&R1);
	printf("Enter R2: ");
	scanf("%lf",&R2);
	printf("Enter R3: ");
	scanf("%lf",&R3);
	printf("Enter R4: ");
	scanf("%lf",&R4);
	printf("Enter R5: ");
	scanf("%lf",&R5);
	printf("Enter V1: ");
	scanf("%lf",&V1);
	printf("Enter V2: ");
	scanf("%lf",&V2);
	double D = (R1+R4)*(-R3)-(R2+R5)*(R1+R3+R4);
	double D1 = (V1)*(-R3) + (V2)*(R1+R3+R4);
	double D2 = (R1+R4)*(-V2)-(R2+R5)*(V1);
	double I2 = D1/D;
	double I3 = D2/D;
	double I1 = I2 + I3;
	int x;
	printf("\n\nAssuming current direction clockwise in both meshes => abcda and dcefd\nUsing Mesh Analysis:-\n");
	printf("\nEquation 1: V1 - I1*R1 - I3*R3 - I1*R4 = 0\t(...KVL)\n");
	printf("Equation 2: -I2*R2 - V2 - I2*R5 + I3*R3 = 0\t(...KVL)\n");
	printf("Equation 3: I1 = I2 + I3\t(...KCL)\n\nSimplifying these equations:-\n\n");
	printf("=>\t(R1+R4)*I2 + (R1+R3+R4)*I3 = V1\n=>\t(R2+R5)*I2 + (-R3)*I3 = -V2\n\n");
	printf("Solving the above eq.(1) and eq.(2) using Matrix Method:-\n\n---------------------------------------MATRIX METHOD---------------------------------------\n");
	printf("[R1+R4\tR1+R3+R4]\t[I2]\t[V1]\n\t\t   =\n[R2+R5\t-(R3)]\t\t[I3]\t[-(V2)]\n\nSubstituting the values in the above matrix:-\n\n");
	printf("[%.2f\t%.2f][I2]\t\t[%.2f]\n\t\t\t=\n[%.2f\t-(%.2f)][I3]\t\t[-(%.2f)]\n\n---------------------------------------MATRIX METHOD---------------------------------------\nUsing Cramer's Rule,\n\tD = (R1+R4)*(-R3)-(R2+R5)*(R1+R3+R4)\t=>\tD = %.2f\n\tD1 = (V1)*(-R3) + (V2)*(R1+R3+R4)\t=>\tD1 = %.2f\n\tD2 = (R1+R4)*(-V2)-(R2+R5)*(V1)\t\t=>\tD2 = %.2f\nHence,\n\tI2 = D1/D\t=>\tI2 = %.2f\n\tI3 = D2/D\t=>\t%.2f\n\tI1 = I2 + I3\t=>\t%.2f",R1+R4,R1+R3+R4,V1,R2+R5,R3,V2,D,D1,D2,I2,I3,I1);
    printf("\n\n\nEnter 1 to exit: ");
	scanf("%d",&x);
	return 0;
}
