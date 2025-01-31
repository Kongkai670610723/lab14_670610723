void showMatrix(const bool A[][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}

void inputMatrix(double A[][N]) {
    for (int i = 0; i < N; i++) {
        cout << "Row " << i + 1 << ": ";
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
}

void findLocalMax(const double A[][N], bool B[][N]) {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            B[i][j] = false;

    for (int i = 1; i < N - 1; i++) {
        for (int j = 1; j < N - 1; j++) {
            double current = A[i][j];
            
            if (current >= A[i-1][j] && current >= A[i+1][j] && current >= A[i][j-1] && current >= A[i][j+1]) {
                B[i][j] = true;
            }
        }
    }
}