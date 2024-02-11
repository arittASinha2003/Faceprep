Description:
Snow White's father, the king, marries again. His newwife is very talented, but she is a vain and wicked woman who practices witchcraft. The new queen possesses a magic mirror, which she asks every morning, "Magic mirror on the wall, who is the smartest one of all?" The mirror always tells the queen that she is the smartest. The queen is always pleased with that because the magic mirror never lies. But as Snow White grows up, she becomes more talented each day and even more talented than her stepmother. When the queen asks her mirror, it tells her that Snow White is the smartest. The Queen asks the mirror what can be done so that she becomes the smartest of all. The mirror asks her to write a C program to check whether the given matrix is a lower triangular matrix or not. Can you help the Queen to be the smartest?

Input Format:
Enter the row and column
Enter the matrix

Output Format:
Prints Lower triangular matrix or Not a Lower triangular matrix

Sample Input 1:
3
1 0 0
4 5 0
1 0 0

Sample Output 1:
Lower triangular matrix

Explanation:
Since all the elements above the diagonal of the matrix are not 0, it prints Lower Triangular Matrix

Sample Input 2:
3
0 1 1
0 2 3
0 1 2

Sample Output 2:
Not a Lower Triangular Matrix

Explanation:
Since all the elements above the diagonal of the matrix are not 0, it prints Not a Lower Triangular Matrix

#include <stdio.h>


int isLowerTriangular(int matrixSize, int matrix[][matrixSize]) {
    for (int i = 0; i < matrixSize; i++) {
        for (int j = i + 1; j < matrixSize; j++) {
            
            if (matrix[i][j] != 0) {
                return 0; 
            }
        }
    }
    return 1; 
}

int main() {
    int matrixSize;
    scanf("%d", &matrixSize);

    int matrix[matrixSize][matrixSize];

    for (int i = 0; i < matrixSize; i++) {
        for (int j = 0; j < matrixSize; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    if (isLowerTriangular(matrixSize, matrix)) {
        printf("Lower Triangular Matrix\n");
    } else {
        printf("Not a Lower Triangular Matrix\n");
    }
    return 0;
}
